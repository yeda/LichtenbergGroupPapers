/////////////////////////////////////////////////////////////////////////////
///	EWPlotMacros: Some Root Function which are helpful to create nice plots
///
///  MSchott (CERN)
/////////////////////////////////////////////////////////////////////////////

#ifndef EWPlotMacrosH
#define EWPlotMacrosH

#include "TStyle.h"
#include "TF1.h"
#include "TH1F.h"
#include "TH2F.h"

/////////////////////////////////////////////////////////////////////////////
/// Global Variables
/////////////////////////////////////////////////////////////////////////////


bool	bFirstDraw;
bool	bLoaded	= false;
int 	UniqueIDCounter;
int		TCanvasCounter;
int 	TextCounter;
int		TextPosition;
int		vecMode[100];
int		nStackCounter;
double	vecStackScale[10];
int		vecStackColor[10];
TH1F*	vecStackHist[10];

enum
{
	UP_LEFT,
	UP_RIGHT,
	DOWN_LEFT,
	DOWN_RIGHT,
	UP_MIDDLELEFT
};

enum
{
	EMPTY,
	FILL_1,		// Fill_Solid
	FILL_2,		// Fill_Solid
	POINT_1,	// Point_Data
	POINT_2,	// Point_Triangle
	POINT_3,	// Point_Rectangle
	POINT_4,	// Point_Circle
	BAND_1,	// Point_Band
	BAND_2,	// Point_Band
	BAND_3,	// Point_Band
	HLINE_1,		// Line_Solid_Red
	LINE_1,		// Line_Solid_Red
	LINE_2,		// Line_Solid_Blue
	LINE_3,		// Line_Solid_Black
	GRAPH_1,
	GRAPH_2,
	GRAPH_3,
	COLZ,		// colz mode for 2D histograms
	SCATTER,	// scatter mode for 2D histograms
	BOX,		// box mode for 2D histograms
	HIST,
	HIST_BAR
};

/////////////////////////////////////////////////////////////////////////////
/// Functions for modifiyng Style of Plots
/////////////////////////////////////////////////////////////////////////////

void EWSetTextPosition(int pos)
{
	TextCounter		= 0;
	TextPosition	= pos;
}


/////////////////////////////////////////////////////////////////////////////
/// Helpful Functions which are not Root Specific
/////////////////////////////////////////////////////////////////////////////

std::string EWToString(double d)
{
	std::string s;
	std::stringstream out;
	out << d;
	return out.str();
}

double EWToDouble(std::string s1)
{
	double d=0.0;
	std::string s2 = "";
	for (unsigned int i=0; i<s1.length(); i++)
		if ((s1[i]=='1') || (s1[i]=='2') || (s1[i]=='3') || (s1[i]=='4') || (s1[i]=='5') || (s1[i]=='e') || (s1[i]=='-') || 
			(s1[i]=='6') || (s1[i]=='7') || (s1[i]=='8') || (s1[i]=='9') || (s1[i]=='0') || (s1[i]=='.') || (s1[i]=='E')) 
			s2+=s1[i];
	if (s2.length()==0) return -999.9;
	std::istringstream stm;
	stm.str(s2);

	stm >>d;
	return d;
}


/////////////////////////////////////////////////////////////////////////////
/// ATLAS Style Functions
/////////////////////////////////////////////////////////////////////////////

TStyle* EWAtlasStyle() 
{
	if (bLoaded==false)
	{
		printf("\033[0;%dmEW Unfolding Root Style Macros Loaded \033[0m\n", 34);
		TCanvasCounter = 1000;
		bLoaded=true;
	}
	//gROOT->ProcessLine("#include <vector>");
	
	TStyle *atlasStyle = new TStyle("ATLAS","Atlas style");
	// use plain black on white colors
	Int_t icol=0; // WHITE
	atlasStyle->SetFrameBorderMode(icol);
	atlasStyle->SetFrameFillColor(icol);
	atlasStyle->SetCanvasBorderMode(icol);
	atlasStyle->SetCanvasColor(icol);
	atlasStyle->SetPadBorderMode(icol);
	atlasStyle->SetPadColor(icol);
	atlasStyle->SetStatColor(icol);

	// set the paper & margin sizes
	atlasStyle->SetPaperSize(20,26);

	// set margin sizes
	atlasStyle->SetPadTopMargin(0.05);
	atlasStyle->SetPadRightMargin(0.05);
	atlasStyle->SetPadBottomMargin(0.16);
	atlasStyle->SetPadLeftMargin(0.16);

	// set title offsets (for axis label)
	atlasStyle->SetTitleXOffset(1.4);
	atlasStyle->SetTitleYOffset(1.4);

	// use large fonts
	//Int_t font=72; // Helvetica italics
	Int_t font=42; // Helvetica
	Double_t tsize=0.05;
	atlasStyle->SetTextFont(font);

	atlasStyle->SetTextSize(tsize);
	atlasStyle->SetLabelFont(font,"x");
	atlasStyle->SetTitleFont(font,"x");
	atlasStyle->SetLabelFont(font,"y");
	atlasStyle->SetTitleFont(font,"y");
	atlasStyle->SetLabelFont(font,"z");
	atlasStyle->SetTitleFont(font,"z");

	atlasStyle->SetLabelSize(tsize,"x");
	atlasStyle->SetTitleSize(tsize,"x");
	atlasStyle->SetLabelSize(tsize,"y");
	atlasStyle->SetTitleSize(tsize,"y");
	atlasStyle->SetLabelSize(tsize,"z");
	atlasStyle->SetTitleSize(tsize,"z");

	// use bold lines and markers
	atlasStyle->SetMarkerStyle(20);
	atlasStyle->SetMarkerSize(1.2);
	atlasStyle->SetHistLineWidth(1.);
	atlasStyle->SetLineStyleString(2,"[12 12]"); // postscript dashes

	// get rid of X error bars 
	//atlasStyle->SetErrorX(0.001);
	// get rid of error bar caps
	atlasStyle->SetEndErrorSize(0.);

	// do not display any of the standard histogram decorations
	atlasStyle->SetOptTitle(0);
	//atlasStyle->SetOptStat(1111);
	atlasStyle->SetOptStat(0);
	//atlasStyle->SetOptFit(1111);
	atlasStyle->SetOptFit(0);
	
	// put tick marks on top and RHS of plots
	atlasStyle->SetPadTickX(1);
	atlasStyle->SetPadTickY(1);

	return atlasStyle;
}

void EWSetAtlasStyle ()
{
	TStyle* atlasStyle = EWAtlasStyle();
	gROOT->SetStyle("ATLAS");
	gROOT->ForceStyle();
}

/////////////////////////////////////////////////////////////////////////////
/// Functions for TCanvas
/////////////////////////////////////////////////////////////////////////////

TCanvas* EWCreateTCanvas(int csize=650)
{
	bFirstDraw		= false;
	UniqueIDCounter	= 0;
	TextCounter		= 0;
	TextPosition	= UP_LEFT;
	for (int i=0; i<10; i++) vecMode[i]		= 0;
	for (int i=0; i<10; i++) vecStackScale[i]	= 1.0;
	for (int i=0; i<10; i++) vecStackHist[i]	= 0;
	nStackCounter	= 0;

	gStyle->SetOptStat(0);
	gStyle->SetOptTitle(0);
	EWSetAtlasStyle();
	TCanvasCounter++;
	std::string canvasName = "Canvas_"+EWToString(TCanvasCounter);
	TCanvas *c1 = new TCanvas(canvasName.c_str(),"A Simple Graph Example",200,10,csize,500);
	c1->SetFillColor(0);
	c1->SetBorderMode(0);
	c1->SetBorderSize(2);
	c1->SetTickx();
	c1->SetTicky();
	c1->SetLeftMargin(0.16);
	c1->SetRightMargin(0.05);
	c1->SetTopMargin(0.05);
	c1->SetBottomMargin(0.16);
	c1->SetFrameBorderMode(0);
	c1->SetFrameBorderMode(0);
	c1->cd();
	return c1;
}

/////////////////////////////////////////////////////////////////////////////
/// Functions for TH1
/////////////////////////////////////////////////////////////////////////////


TH1F* EWCreateBaseHistogram(TH1 *hist)
{
	TH1F *hist2 = new TH1F(hist->GetName(), hist->GetTitle(), 1, hist->GetXaxis()->GetXmin(), hist->GetXaxis()->GetXmax());
	hist2->SetMinimum(hist->GetMinimum()-(hist->GetMaximum()-hist->GetMinimum())*0.05);
	hist2->SetMaximum(hist->GetMaximum()+(hist->GetMaximum()-hist->GetMinimum())*0.05);
	return hist2;
}

TH1F* EWCreateBaseHistogram(double x1, double y1, double x2, double y2)
{
	TH1F *hist2 = new TH1F("BaseHistogram", "BaseHistogram", 1, x1, x2);
	hist2->SetMinimum(y1);
	hist2->SetMaximum(y2);
	return hist2;
}

void EWSetXRange(TH1 *hist, double min, double max)
{
	double bin_min=0;
	double bin_max=hist->GetNbinsX();
	double mdis1=10E100;
	double mdis2=10E100;
	for (unsigned int i=0; i<hist->GetNbinsX(); i++)
	{
		double x=hist->GetBinCenter(i);
		if (fabs(x-min)<mdis1)	{mdis1=fabs(x-min); bin_min=i;}
		if (fabs(x-max)<mdis2)	{mdis2=fabs(x-max); bin_max=i;}
	}
	hist->GetXaxis()->SetRange(bin_min, bin_max);
}

void EWSetYRange(TH1 *hist, double min, double max)
{
	hist->SetMinimum(min);
	hist->SetMaximum(max);
}

TH1F*	EWCreateEmptyHistogram(TH1F *histMC, std::string hName)
{
	TH1F *hist = new TH1F(hName.c_str(), hName.c_str(), 1, 0,0);
	if (histMC==0) return hist;
	std::vector<double> vecD;
	vecD.push_back(histMC->GetXaxis()->GetBinLowEdge(1));
	for (unsigned int i=1; i<=histMC->GetNbinsX(); i++)
		vecD.push_back(histMC->GetXaxis()->GetBinUpEdge(i));
	Double_t *abins = &vecD[0];
	hist->SetBins(histMC->GetNbinsX(), abins);
	hist->SetDirectory(0);
	hist->SetStats(0);
	hist->SetLineWidth(1);
	hist->SetMarkerStyle(20);
	hist->SetMarkerSize(1.2);
	hist->GetXaxis()->SetLabelFont(42);
	hist->GetXaxis()->SetLabelSize(0.05);
	hist->GetXaxis()->SetTitleSize(0.05);
	hist->GetXaxis()->SetTitleOffset(1.4);
	hist->GetXaxis()->SetTitleFont(42);
	hist->GetYaxis()->SetLabelFont(42);
	hist->GetYaxis()->SetLabelSize(0.05);
	hist->GetYaxis()->SetTitleSize(0.05);
	hist->GetYaxis()->SetTitleOffset(1.2);
	hist->GetYaxis()->SetTitleFont(42);
	hist->GetXaxis()->SetTitle(histMC->GetXaxis()->GetTitle());
	hist->GetYaxis()->SetTitle(histMC->GetYaxis()->GetTitle());
	return hist;
}


TH1F*	EWLoadHistogram(std::string Filename, std::string Histname, std::string id="load")
{
	TFile	*file = new TFile(Filename.c_str(), "OPEN");
	TH1F	*h = (TH1F*)file->Get(Histname.c_str());
	if (h==0) return 0;
	TH1F	*histClone = (TH1F*)h->Clone((Histname+id).c_str());
	histClone->SetDirectory(0);
	file->Close();	
	return histClone;
}


TH1D*	EWLoadHistogramD(std::string Filename, std::string Histname, std::string id="load")
{
	TFile	*file = new TFile(Filename.c_str(), "OPEN");
	TH1D	*h = (TH1D*)file->Get(Histname.c_str());
	if (h==0) return 0;
	TH1D	*histClone = (TH1D*)h->Clone((Histname+id).c_str());
	histClone->SetDirectory(0);
	file->Close();	
	return histClone;
}


void EWBeautify(TH1* hist, int mode=0, std::string xaxis="x", std::string yaxis="y")
{
	Int_t ci;
	hist->SetDirectory(0);
	hist->SetStats(0);
	hist->SetLineWidth(1);
	hist->SetMarkerStyle(20);
	hist->SetMarkerSize(1.2);
	hist->GetXaxis()->SetLabelFont(42);
	hist->GetXaxis()->SetLabelSize(0.05);
	hist->GetXaxis()->SetTitleSize(0.05);
	hist->GetXaxis()->SetTitleOffset(1.4);
	hist->GetXaxis()->SetTitleFont(42);
	hist->GetYaxis()->SetLabelFont(42);
	hist->GetYaxis()->SetLabelSize(0.05);
	hist->GetYaxis()->SetTitleSize(0.05);
	hist->GetYaxis()->SetTitleOffset(1.20);
	hist->GetYaxis()->SetTitleFont(42);
	hist->GetXaxis()->SetTitle(xaxis.c_str());
	hist->GetYaxis()->SetTitle(yaxis.c_str());

	hist->SetUniqueID(UniqueIDCounter);
	vecMode[UniqueIDCounter]=mode;
	UniqueIDCounter++;
	
	ci = kAzure;
	if (vecMode[hist->GetUniqueID()]==FILL_2)	ci = kAzure+2;
	if (vecMode[hist->GetUniqueID()]==FILL_1)	ci = kAzure;
	if (vecMode[hist->GetUniqueID()]==HLINE_1)	ci = kOrange;
	if (vecMode[hist->GetUniqueID()]==POINT_1)	hist->SetMarkerStyle(20);
	if (vecMode[hist->GetUniqueID()]==POINT_2)	hist->SetMarkerStyle(26);
	if (vecMode[hist->GetUniqueID()]==POINT_3)	hist->SetMarkerStyle(25);
	if (vecMode[hist->GetUniqueID()]==POINT_4)	hist->SetMarkerStyle(24);
	if (vecMode[hist->GetUniqueID()]==BAND_1)	{ci=kAzure-9; hist->SetMarkerStyle(2);}
	if (vecMode[hist->GetUniqueID()]==BAND_2)	{ci=kAzure-9; hist->SetMarkerStyle(2);}
	if (vecMode[hist->GetUniqueID()]==BAND_3)	{ci=kAzure-9; hist->SetMarkerStyle(2);}
	hist->SetFillColor(ci);
	hist->SetMarkerColor(1);
	hist->SetMarkerSize(1.4);
}


void EWDraw(TH1* hist)
{
	std::string label="";
	int mode = vecMode[hist->GetUniqueID()];
	if (vecMode[hist->GetUniqueID()]==FILL_1)	label="FHist";
	if (vecMode[hist->GetUniqueID()]==HLINE_1)	label="FHist";
	if (vecMode[hist->GetUniqueID()]==FILL_2)	label="FHist";
	if (vecMode[hist->GetUniqueID()]==POINT_1)	label="P";
	if (vecMode[hist->GetUniqueID()]==POINT_2)	label="P";
	if (vecMode[hist->GetUniqueID()]==POINT_3)	label="P";
	if (vecMode[hist->GetUniqueID()]==POINT_4)	label="P";
	if (vecMode[hist->GetUniqueID()]==HIST)     label="HIST";
	if (vecMode[hist->GetUniqueID()]==HIST_BAR)     label="PL";	
	if (vecMode[hist->GetUniqueID()]==BAND_1)	label="zE2";
	if (vecMode[hist->GetUniqueID()]==BAND_2)	label="zE3";
	if (vecMode[hist->GetUniqueID()]==BAND_3)	label="zE4";
	if (bFirstDraw) label+="same";
	bFirstDraw		= true;
	hist->Draw(label.c_str());
}

Double_t EWGetIntegral(TH1* hist, bool useBinWidth=true)
{
	Double_t Integral=0;
	for (unsigned int i=1; i<=hist->GetNbinsX(); i++)
	{
		if (useBinWidth)	Integral+=hist->GetBinContent(i)*hist->GetBinWidth(i);
		if (!useBinWidth)	Integral+=hist->GetBinContent(i);
	}
	return 	Integral;
}

void EWNormalize(TH1* hist, float newIntegral=1.0, bool useBinWidth=true)
{
	Double_t Integral=0;
	for (unsigned int i=1; i<=hist->GetNbinsX(); i++) {
		if (useBinWidth)	Integral+=hist->GetBinContent(i)*hist->GetBinWidth(i);
		if (!useBinWidth)	Integral+=hist->GetBinContent(i);
	}
	hist->SetBinContent(0,0);
	hist->SetBinContent(hist->GetNbinsX()+1,0);	
	for (unsigned int i=1; i<=hist->GetNbinsX(); i++)
	{
		hist->SetBinError(i, (hist->GetBinError(i)*newIntegral)/Integral);
		hist->SetBinContent(i, (hist->GetBinContent(i)*newIntegral)/Integral);
	}
}


void EWScale(TH1* hist, double factor=1.0, int mode=0)
{
	if (mode == 0)
	{
		for (unsigned int i=0; i<=hist->GetNbinsX(); i++)
		{
			hist->SetBinError(i, sqrt(hist->GetBinContent(i))*factor);
			hist->SetBinContent(i, hist->GetBinContent(i)*factor);
		}
	}
	if (mode == 1)	
	{
		for (unsigned int i=0; i<=hist->GetNbinsX(); i++)
		{
			hist->SetBinError(i, hist->GetBinError(i)*factor);
			hist->SetBinContent(i, hist->GetBinContent(i)*factor);
		}		
	}
}


void EWRephraseXaxis(TH1* hist) {
	if (hist==0) return;
	/// Setting Labels
	std::vector<double> vecD;
	vecD.push_back(hist->GetXaxis()->GetBinLowEdge(1));
	for (unsigned int i=1; i<=hist->GetNbinsX(); i++)
		vecD.push_back(hist->GetXaxis()->GetBinUpEdge(i));
	std::vector<string> vecLabels;
	for (unsigned int i=0; i<vecD.size()-1; i++){
		//vecLabels.push_back(EWToString(vecD[i])+"-"+EWToString(vecD[i+1]));
		if(i==0) vecLabels.push_back(EWToString(vecD[i])+"             "+EWToString(vecD[i+1]));
		else vecLabels.push_back("                  "+EWToString(vecD[i+1]));
    }
	/// Setting Binning
	std::vector<double> vecBins;
	for (unsigned int i=0; i<vecD.size(); i++)
		vecBins.push_back(i);
		Double_t *abins = &vecBins[0];
	
	hist->GetXaxis()->Set(vecD.size()-1, abins);
	
	for (unsigned int i=0; i<vecLabels.size(); i++)
		hist->GetXaxis()->SetBinLabel(i+1, vecLabels[i].c_str());

	hist->SetTickLength(1.0, "X");
	hist->GetXaxis()->LabelsOption("h");
}


void EWRephraseXaxisDavesIdea(TH1* hist) {
	if (hist==0) return;
	/// Setting Labels
	std::vector<double> vecD;
	vecD.push_back(hist->GetXaxis()->GetBinLowEdge(1));
	for (unsigned int i=1; i<=hist->GetNbinsX(); i++)
		vecD.push_back(hist->GetXaxis()->GetBinUpEdge(i));
	std::vector<string> vecLabels;
	for (unsigned int i=0; i<vecD.size()-1; i++){
		string label = "";
		//vecLabels.push_back(EWToString(vecD[i])+"-"+EWToString(vecD[i+1]));
		if (i==0) 				label = "";
		label += EWToString(vecD[i])+"    ";
		if (i==vecD.size()-2) 	label += "        "+EWToString(vecD[i+1]);
		vecLabels.push_back(label.c_str());
    }
	/// Setting Binning
	std::vector<double> vecBins;
	for (unsigned int i=0; i<vecD.size(); i++) {
		double nextStep = vecD[i];
		if (i>0) {
				if (fabs(vecD[i]-vecD[i-1])>200) nextStep=vecD[i-1]+50;
		}
		vecBins.push_back(nextStep);
	}
		Double_t *abins = &vecBins[0];
	
	hist->GetXaxis()->Set(vecD.size()-1, abins);
	
	for (unsigned int i=0; i<vecLabels.size(); i++)
		hist->GetXaxis()->SetBinLabel(i+1, vecLabels[i].c_str());

	hist->SetTickLength(0.1, "X");
	hist->GetXaxis()->LabelsOption("h");
}

TH1F *EWRephraseXaxisDavesIdeaHopeItWorks(TH1F *hist){
	std::vector<double> vecD;
	std::vector<double> vecContent;
	std::vector<double> vecError;
	vecD.push_back(hist->GetXaxis()->GetBinLowEdge(1));
	for (unsigned int i=1; i<=hist->GetNbinsX(); i++) {
		vecD.push_back(hist->GetXaxis()->GetBinUpEdge(i));
		vecContent.push_back(hist->GetBinContent(i));
		vecError.push_back(hist->GetBinError(i));
	}
	std::vector<double> vecBins;
	for (unsigned int i=0; i<vecD.size(); i++) {
		double nextStep = vecD[i];
		if (i>0) if (fabs(vecD[i]-vecD[i-1])>200) nextStep=vecD[i-1]+50;
		vecBins.push_back(nextStep);
	}
	
	Double_t *abins = &vecBins[0];
	std::string name = hist->GetName();
	name += "tmp";
	
	TH1F *newhist = new TH1F(name.c_str(), name.c_str(), vecD.size()-1, abins);
	for (unsigned int i=1; i<=newhist->GetNbinsX(); i++) {
		newhist->SetBinContent(i, vecContent[i-1]);
		newhist->SetBinError(i, vecError[i-1]);
	}
	return newhist;
}


void EWRephraseXaxis(TH2* hist) {
	if (hist==0) return;
	/// Setting Labels
	std::vector<double> vecD;
	vecD.push_back(hist->GetXaxis()->GetBinLowEdge(1));
	for (unsigned int i=1; i<=hist->GetNbinsX(); i++)
		vecD.push_back(hist->GetXaxis()->GetBinUpEdge(i));
	std::vector<string> vecLabels;
	for (unsigned int i=0; i<vecD.size()-1; i++)
		vecLabels.push_back(EWToString(vecD[i])+"-"+EWToString(vecD[i+1]));

	/// Setting Binning
	std::vector<double> vecBins;
	for (unsigned int i=0; i<vecD.size(); i++)
		vecBins.push_back(i);
		Double_t *abins = &vecBins[0];
	
	hist->GetXaxis()->Set(vecD.size()-1, abins);
	hist->GetYaxis()->Set(vecD.size()-1, abins);
	
	for (unsigned int i=0; i<vecLabels.size(); i++) {
		hist->GetXaxis()->SetBinLabel(i+1, vecLabels[i].c_str());
		hist->GetYaxis()->SetBinLabel(i+1, vecLabels[i].c_str());
	}
	hist->SetTickLength(1.0, "X");
}


/////////////////////////////////////////////////////////////////////////////
/// Functions for TH2
/////////////////////////////////////////////////////////////////////////////

TH2F*	load2DHistogram(std::string name, std::string object, std::string id="")
{
	TH2F *hist, *hist2;
	TFile *file0 = new TFile(name.c_str(), "READ");
	file0->GetObject(object.c_str(), hist);
	if (hist!=0)
	{
		hist2 = new TH2F(*hist);
		hist2->SetDirectory(0);
	}
	file0->Close();
	delete file0;
	return hist2;
}


TH2D*	load2DHistogramD(std::string name, std::string object, std::string id="")
{
	TH2D *hist, *hist2;
	TFile *file0 = new TFile(name.c_str(), "READ");
	file0->GetObject(object.c_str(), hist);
	if (hist!=0)
	{
		hist2 = new TH2D(*hist);
		hist2->SetDirectory(0);
	}
	file0->Close();
	delete file0;
	return hist2;
}

void EWBeautify(TH2F* hist, int mode=0, std::string xaxis="x", std::string yaxis="y")
{
	Int_t ci;
	hist->SetDirectory(0);
	hist->SetStats(0);
	hist->SetLineWidth(1);
	hist->SetMarkerStyle(1);
	hist->GetXaxis()->SetLabelFont(42);
	hist->GetXaxis()->SetLabelSize(0.05);
	hist->GetXaxis()->SetTitleSize(0.05);
	hist->GetXaxis()->SetTitleOffset(1.4);
	hist->GetXaxis()->SetTitleFont(42);
	hist->GetYaxis()->SetLabelFont(42);
	hist->GetYaxis()->SetLabelSize(0.05);
	hist->GetYaxis()->SetTitleSize(0.05);
	hist->GetYaxis()->SetTitleOffset(1.2);
	hist->GetYaxis()->SetTitleFont(42);
	hist->GetXaxis()->SetTitle(xaxis.c_str());
	hist->GetYaxis()->SetTitle(yaxis.c_str());
	hist->SetUniqueID(UniqueIDCounter);
	vecMode[UniqueIDCounter]=mode;
	UniqueIDCounter++;
}


void EWDraw(TH2* hist, TCanvas *c1=0, double minimalValue=-999.0, double maximalValue=-999.0)
{
	if ((c1!=0) && (vecMode[hist->GetUniqueID()]==COLZ)) c1->SetRightMargin(0.15);
	std::string label="colz";
	if (vecMode[hist->GetUniqueID()]==COLZ)		label="colz";
	if (vecMode[hist->GetUniqueID()]==SCATTER)	label="";
	if (vecMode[hist->GetUniqueID()]==BOX)		label="box";
	if (bFirstDraw) label+="same";
	bFirstDraw		= true;

	Double_t stops[5] = { 0.00, 0.34, 0.61, 0.84, 1.00 };
	Double_t red[5]   = { 0.00, 0.00, 0.87, 1.00, 0.51 };
	Double_t green[5] = { 0.00, 0.81, 1.00, 0.20, 0.00 };
	Double_t blue[5]  = { 0.51, 1.00, 0.12, 0.00, 0.00 };
	TColor::CreateGradientColorTable(5, stops, red, green, blue, 255);
	gStyle->SetNumberContours(255);
	
	hist->Draw(label.c_str());
}


/////////////////////////////////////////////////////////////////////////////
/// Functions for TFunctions
/////////////////////////////////////////////////////////////////////////////

void EWDraw(TF1* func)
{
	std::string label="";
	if (bFirstDraw) label+="same";
	bFirstDraw		= true;
	func->Draw(label.c_str());
}


/////////////////////////////////////////////////////////////////////////////
/// Functions for adding Information to Canvas
/////////////////////////////////////////////////////////////////////////////

void EWAddLumi(double lumi=35.0)
{
	double x1, y1;
	double markerOffset = 0.0;
	if (TextPosition==UP_LEFT)
	{
		x1=0.2+markerOffset;
		y1=0.9-TextCounter*0.06;
	}
	if (TextPosition==UP_MIDDLELEFT)
	{
		x1=0.3+markerOffset;
		y1=0.9-TextCounter*0.06;
	}
	if (TextPosition==UP_RIGHT)
	{
		x1=0.63+markerOffset;
		y1=0.9-TextCounter*0.06;
	}
	if (TextPosition==DOWN_LEFT)
	{
		x1=0.2+markerOffset;
		y1=0.4-TextCounter*0.06;
	}
	if (TextPosition==DOWN_RIGHT)
	{
		x1=0.63+markerOffset;
		y1=0.4-TextCounter*0.06;
	}	TextCounter++;
	std::string text = "#int L dt = "+EWToString(lumi)+" fb^{-1}";
	TLatex l;
    l.SetTextAlign(12);
    l.SetTextFont(42);
    l.SetTextSize(0.05);
    l.SetLineWidth(2);
	l.SetNDC();
	l.DrawLatex(x1,y1,text.c_str());
}


void EWDrawBox(Double_t x, Double_t y, TH1 *hist) 
{
	Double_t tsize	= 0.06;
	int nbsize		= 2;
	if (hist->GetFillStyle()>=3000) nbsize=0;
	TPave *mbox = new TPave(x-0.5*tsize,y-0.27*tsize,x+0.5*tsize,y+0.24*tsize,nbsize,"NDC");
	Int_t ci = TColor::GetColor("#ffff99");
	mbox->SetShadowColor(0);
	mbox->SetLineWidth(1);
	mbox->SetFillColor(hist->GetFillColor());
	mbox->SetLineColor(hist->GetLineColor());
	mbox->SetFillStyle(hist->GetFillStyle());
	mbox->Draw();
}


void EWDrawMarker(Double_t x,Double_t y, TH1 *hist)
{
	Double_t tsize=0.06;
	TMarker *marker = new TMarker(x-(0.6*tsize),y,8);
	marker->SetMarkerStyle(hist->GetMarkerStyle());
	marker->SetMarkerColor(hist->GetMarkerColor());
	marker->SetNDC();
	marker->SetMarkerSize(1.4);
	marker->Draw();
}

void EWDrawLine(Double_t x,Double_t y, TH1 *func)
{
	TLine mline;
	mline.SetLineWidth(func->GetLineWidth());
	mline.SetLineColor(func->GetLineColor());
	mline.SetLineStyle(func->GetLineStyle());
	mline.DrawLineNDC(x-0.2*0.06,y,x+0.3*0.06,y);
}


void EWAddText(std::string text, TObject *obj = 0, double size=0.04, double rightoffset=0.53, double xshift=0.0, int color=1)
{
	double x1, y1;
	double markerOffset = 0.0;
	if (obj!=0) markerOffset=0.04;
	if (TextPosition==UP_LEFT)
	{
		x1=0.2+markerOffset+xshift;
		y1=0.9-TextCounter*0.06;
	}
	if (TextPosition==UP_MIDDLELEFT)
	{
		x1=0.3+markerOffset+xshift;
		y1=0.9-TextCounter*0.06;
	}
	if (TextPosition==UP_RIGHT)
	{
		x1=rightoffset+markerOffset+xshift;
		y1=0.9-TextCounter*0.06;
	}
	if (TextPosition==DOWN_LEFT)
	{
		x1=0.2+markerOffset+xshift;
		y1=0.4-TextCounter*0.06;
	}
	if (TextPosition==DOWN_RIGHT)
	{
		x1=0.63+markerOffset+xshift;
		y1=0.4-TextCounter*0.06;
	}	TextCounter++;
	TLatex l;
	l.SetTextAlign(12);
	l.SetTextSize(size);
	l.SetNDC();
	l.SetTextColor(color);
	l.DrawLatex(x1,y1,text.c_str());
	
	if (obj!=0)
	{
		if (vecMode[obj->GetUniqueID()]==FILL_1)	EWDrawBox(x1-markerOffset, y1, (TH1*)obj);
		if (vecMode[obj->GetUniqueID()]==FILL_2)	EWDrawBox(x1-markerOffset, y1, (TH1*)obj);
		if (vecMode[obj->GetUniqueID()]==POINT_1)	EWDrawMarker(x1, y1, (TH1*)obj);
		if (vecMode[obj->GetUniqueID()]==POINT_2)	EWDrawMarker(x1, y1, (TH1*)obj);
		if (vecMode[obj->GetUniqueID()]==POINT_3)	EWDrawMarker(x1, y1, (TH1*)obj);
		if (vecMode[obj->GetUniqueID()]==POINT_4)	EWDrawMarker(x1, y1, (TH1*)obj);
		if (vecMode[obj->GetUniqueID()]==BAND_1)	EWDrawMarker(x1, y1, (TH1*)obj);
		if (vecMode[obj->GetUniqueID()]==BAND_2)	EWDrawMarker(x1, y1, (TH1*)obj);
		if (vecMode[obj->GetUniqueID()]==BAND_3)	EWDrawMarker(x1, y1, (TH1*)obj);

		if (vecMode[obj->GetUniqueID()]==LINE_1)	EWDrawLine(x1-markerOffset, y1, (TH1*)obj);
		if (vecMode[obj->GetUniqueID()]==LINE_2)	EWDrawLine(x1-markerOffset, y1, (TH1*)obj);
		if (vecMode[obj->GetUniqueID()]==LINE_3)	EWDrawLine(x1-markerOffset, y1, (TH1*)obj);
	}
}


void EWAddTextMarker(std::string text, int color=1, double size=0.04, double rightoffset=0.63, double xshift=0.0)
{
	double x1, y1;
	double markerOffset = 0.0;
	markerOffset=0.04;
	if (TextPosition==UP_LEFT)
	{
		x1=0.2+markerOffset+xshift;
		y1=0.9-TextCounter*0.06;
	}
	if (TextPosition==UP_MIDDLELEFT)
	{
		x1=0.3+markerOffset+xshift;
		y1=0.9-TextCounter*0.06;
	}
	if (TextPosition==UP_RIGHT)
	{
		x1=rightoffset+markerOffset+xshift;
		y1=0.9-TextCounter*0.06;
	}
	if (TextPosition==DOWN_LEFT)
	{
		x1=0.2+markerOffset+xshift;
		y1=0.4-TextCounter*0.06;
	}
	if (TextPosition==DOWN_RIGHT)
	{
		x1=0.63+markerOffset+xshift;
		y1=0.4-TextCounter*0.06;
	}	TextCounter++;
	TLatex l;
	l.SetTextAlign(12);
	l.SetTextSize(size);
	l.SetNDC();
	l.SetTextColor(color);
	l.SetTextColor(1);
	l.DrawLatex(x1+0.025,y1,text.c_str());
	
	TLine mline;
	mline.SetLineWidth(2);
	mline.SetLineColor(color);
	mline.DrawLineNDC(x1-0.2*0.06,y1,x1+0.3*0.06,y1);
}


void EWAddATLAS(std::string slabel="", double size=0.05)
{
	double x1, y1;
	double markerOffset = 0.0;
	if (TextPosition==UP_LEFT)
	{
		x1=0.2+markerOffset;
		y1=0.9-TextCounter*0.06;
	}
	if (TextPosition==UP_MIDDLELEFT)
	{
		x1=0.3+markerOffset;
		y1=0.9-TextCounter*0.06;
	}
	
	if (TextPosition==UP_RIGHT)
	{
		x1=0.60+markerOffset;
		y1=0.9-TextCounter*0.06;
	}
	if (TextPosition==DOWN_LEFT)
	{
		x1=0.2+markerOffset;
		y1=0.4-TextCounter*0.06;
	}
	if (TextPosition==DOWN_RIGHT)
	{
		x1=0.68+markerOffset;
		y1=0.3-TextCounter*0.06;
	}	TextCounter++;
	TLatex l1;
	l1.SetTextAlign(12);
	l1.SetTextSize(size);
	l1.SetTextFont(72);
	l1.SetLineWidth(2);

	l1.SetNDC();
	if (slabel=="")
		l1.DrawLatex(x1,y1,"ATLAS");
	else
		l1.DrawLatex(x1,y1,slabel.c_str());	
}

/////////////////////////////////////////////////////////////////////////////
/// Functions for THStacks
/////////////////////////////////////////////////////////////////////////////

THStack* EWCreateStack(std::string name, TH1F *scaleHist=0, double scale=-1.0)
{
	THStack *thStack = new THStack(name.c_str(), name.c_str());
	
	double fullint = 0.0;
	for (int i=0; i<nStackCounter; i++)
		fullint+=EWGetIntegral(vecStackHist[i])*vecStackScale[i];

	for (int i=0; i<nStackCounter; i++)
	{
		double sFactor = vecStackScale[i];
		if (scale!=-1) sFactor*=scale;
		if (scaleHist!=0) sFactor=sFactor*EWGetIntegral(scaleHist)/fullint;
		vecStackHist[i]->Scale(sFactor);
		vecStackHist[i]->SetFillColor(0);
		vecStackHist[i]->SetLineWidth(1);
		vecStackHist[i]->SetLineColor(1);
		if (vecStackColor[i]==0) 	vecStackHist[i]->SetFillColor(kAzure+7);
		if (vecStackColor[i]==1) 	vecStackHist[i]->SetFillColor(kOrange+0);
		if (vecStackColor[i]==2) 	vecStackHist[i]->SetFillColor(kOrange-3);
		if (vecStackColor[i]==3) 	vecStackHist[i]->SetFillColor(kOrange+10);
		if (vecStackColor[i]==4) 	vecStackHist[i]->SetFillColor(kPink-8);
		if (vecStackColor[i]==5) 	vecStackHist[i]->SetFillColor(kGreen-9);
		thStack->Add(vecStackHist[i], "Hist");
	}
	return thStack;
}

void EWAddToStack(TH1F* hist, int IdColorCode=0, double scaleFactor=1.0)
{
	if (hist==0) return;
	vecStackHist[nStackCounter]		= hist;
	vecStackColor[nStackCounter]	= IdColorCode;
	vecStackScale[nStackCounter]	= scaleFactor;
	nStackCounter++;
}

void EWDraw(THStack *thStack)
{
	thStack->Draw("same");
	bFirstDraw		= true;
}


/////////////////////////////////////////////////////////////////////////////
/// Functions for Creating Performance Plots
/////////////////////////////////////////////////////////////////////////////

void	EWCreateMCPerformanceCanvas(TCanvas	*c1, TH1F *histMC, TH1F *histData, bool bWithGrid=false, double minX=-999.9, double maxX=-999.9, bool isLog=false, std::string ratiotitle = "Ratio   ")
{
			c1->Divide(1,1);

			TPad *c1_1 = new TPad("c1_2", "c1_2",0.0,0.25,1.0,1.0);
			c1_1->SetTopMargin(0.05);
			c1_1->SetBottomMargin(0.01);
			c1_1->SetLeftMargin(0.15);
			c1_1->SetRightMargin(0.05);
			c1_1->SetFrameBorderMode(0);
			c1_1->SetFrameBorderMode(0);

			if (bWithGrid) c1_1->SetGrid();
			c1_1->Draw();
			c1_1->cd();
			if (isLog) c1_1->SetLogy();

			c1->cd(1);
			TPad *c1_2 = new TPad("c2_2", "c2_2",0.0,0.0,1.0,0.25);
			c1_2->SetTopMargin(0.01);
			c1_2->SetBottomMargin(0.4);
			c1_2->SetLeftMargin(0.143);
			c1_2->SetRightMargin(0.041);
			c1_2->SetGrid();
			c1_2->Draw();
			c1_2->cd();

			TH1F *histRatio = new TH1F("histRatio", "histRatio", 1, 0,0);
			std::cout<<"Titel : "<<histMC->GetXaxis()->GetTitle()<<std::endl;
			EWBeautify(histRatio, POINT_1, histMC->GetXaxis()->GetTitle(), "Data/MC");
			histRatio->GetXaxis()->SetLabelSize(0.16);
			histRatio->GetXaxis()->SetTitleSize(0.18);
			histRatio->GetXaxis()->SetTitleOffset(1.00);
			histRatio->GetXaxis()->SetTitleFont(42);
			histRatio->GetYaxis()->SetLabelFont(42);
			histRatio->GetYaxis()->SetLabelSize(0.10);
			histRatio->GetYaxis()->SetTitleSize(0.16);
			histRatio->GetYaxis()->SetTitleOffset(0.44);
			histRatio->GetYaxis()->SetTitleFont(42);
			histMC->GetXaxis()->SetLabelSize(0.0);
			histMC->GetXaxis()->SetTitleSize(0.0);
			histData->GetXaxis()->SetTitleSize(0.0);
			histData->GetXaxis()->SetLabelSize(0.0);

			std::vector<double> vecRatio;
			std::vector<double> vecSigma;
			if (histMC!=0)
			{		
				std::vector<double> vecD;
				vecD.push_back(histMC->GetXaxis()->GetBinLowEdge(1));
				for (unsigned int i=1; i<=histMC->GetNbinsX(); i++)
					vecD.push_back(histMC->GetXaxis()->GetBinUpEdge(i));
				Double_t *abins = &vecD[0];
				histRatio->SetBins(histMC->GetNbinsX(), abins);
				for (unsigned int i=1; i<=histMC->GetNbinsX(); i++)
				{

					double ratio=0.0;
					double sigma = 0.0;
					double a	= histData->GetBinContent(i);
					double da	= histData->GetBinError(i);
					double b	= histMC->GetBinContent(i);
					double db	= histMC->GetBinError(i);
					if (b!=0.0)
					{
						sigma = sqrt(pow(da/b,2) + pow(a*db/(b*b),2));
						ratio = a/b;
						//std::cout<<i<<"  "<<ratio<<"  "<<sigma<<"  "<<da<<"  "<<db<<std::endl;
					}
					vecRatio.push_back(ratio);
					vecSigma.push_back(sigma);
				}
			}

			double dmin = 1.0;
			double dmax = 0.0;
			for (unsigned int i=1; i<=histRatio->GetNbinsX(); i++)
			{
				histRatio->SetBinContent(i, vecRatio[i-1]);
				histRatio->SetBinError(i, vecSigma[i-1]);
				if (minX!=-999.9) if (histRatio->GetBinCenter(i)<minX)	continue;
				if (maxX!=-999.9) if (histRatio->GetBinCenter(i)>maxX)	continue;
				if (vecRatio[i-1]!=0) {
					if ((vecRatio[i-1]-vecSigma[i-1])<dmin)	dmin = vecRatio[i-1]-vecSigma[i-1];
					if ((vecRatio[i-1]+vecSigma[i-1])>dmax)	dmax = vecRatio[i-1]+vecSigma[i-1];
				}
			}
			dmin*=0.981;
			dmax*=1.019;
			histRatio->SetMinimum(1.0-0.6*fabs(dmax-dmin));
			histRatio->SetMaximum(1.0+0.6*fabs(dmax-dmin));
			histRatio->SetMinimum(0.93);
			histRatio->SetMaximum(1.07);
			histRatio->GetYaxis()->SetLabelSize(0.15);
			histRatio->GetYaxis()->SetTitleSize(0.18);
			histRatio->GetYaxis()->SetTitleOffset(0.4);
			histRatio->GetYaxis()->SetTitleFont(42);
			histRatio->GetYaxis()->SetNdivisions(4);
			if (isLog) histRatio->GetXaxis()->SetNdivisions(4);

			if (minX!=-999.9) EWSetXRange(histRatio, minX, maxX);
			histRatio->SetFillColor(kTeal-4);
			histRatio->SetMarkerSize(0.9);
			histRatio->SetMarkerColor(kGray+3);
			histRatio->Draw("E2");
			histRatio->Draw("same");
			TLine lineRatio;
			lineRatio.SetLineStyle(7);
			lineRatio.SetLineWidth(1);
			lineRatio.SetLineColor(kTeal+3);
			c1_1->cd();
	}



/////////////////////////////////////////////////////////////////////////////
/// Functions for Creating Performance Plots
/////////////////////////////////////////////////////////////////////////////

void	EWCreateMCPerformanceCanvas(TCanvas	*c1, TH1F *histData, TH1F *histMC, TH1F *histMC2, double ratioRange=0.1)
{
			c1->Divide(1,1);

			TPad *c1_1 = new TPad("c1_2", "c1_2",0.0,0.25,1.0,1.0);
			c1_1->SetTopMargin(0.05);
			c1_1->SetBottomMargin(0.01);
			c1_1->SetLeftMargin(0.15);
			c1_1->SetRightMargin(0.05);
			c1_1->SetFrameBorderMode(0);
			c1_1->SetFrameBorderMode(0);

			c1_1->Draw();
			c1_1->cd();

			c1->cd(1);
			TPad *c1_2 = new TPad("c2_2", "c2_2",0.0,0.0,1.0,0.25);
			c1_2->SetTopMargin(0.01);
			c1_2->SetBottomMargin(0.4);
			c1_2->SetLeftMargin(0.143);
			c1_2->SetRightMargin(0.041);
			c1_2->SetGrid();
			c1_2->Draw();
			c1_2->cd();

			TH1F *histRatio = (TH1F*)histMC->Clone("Ratio1");
			histRatio->SetDirectory(0);
			
			EWBeautify(histRatio, POINT_1, histMC->GetXaxis()->GetTitle(), "Data/MC");
			histRatio->GetXaxis()->SetLabelSize(0.16);
			histRatio->GetXaxis()->SetTitleSize(0.18);
			histRatio->GetXaxis()->SetTitleOffset(1.00);
			histRatio->GetXaxis()->SetTitleFont(42);
			histRatio->GetYaxis()->SetLabelFont(42);
			histRatio->GetYaxis()->SetLabelSize(0.10);
			histRatio->GetYaxis()->SetTitleSize(0.16);
			histRatio->GetYaxis()->SetTitleOffset(0.44);
			histRatio->GetYaxis()->SetTitleFont(42);
			histRatio->SetMinimum(1.0-ratioRange);
			histRatio->SetMaximum(1.0+ratioRange);
			histRatio->GetYaxis()->SetLabelSize(0.15);
			histRatio->GetYaxis()->SetTitleSize(0.18);
			histRatio->GetYaxis()->SetTitleOffset(0.4);
			histRatio->GetYaxis()->SetTitleFont(42);
			histRatio->GetYaxis()->SetNdivisions(4);
			histRatio->SetFillColor(kTeal-4);
			histRatio->SetMarkerSize(0.9);
			histRatio->SetMarkerColor(kTeal+3);
			
			histMC->GetXaxis()->SetLabelSize(0.0);
			histMC->GetXaxis()->SetTitleSize(0.0);
			histData->GetXaxis()->SetTitleSize(0.0);
			histData->GetXaxis()->SetLabelSize(0.0);
			TH1F *histRatio2 = (TH1F*)histRatio->Clone("Ratio2");
			EWBeautify(histRatio2, POINT_1, histMC->GetXaxis()->GetTitle(), "Data/MC");
			histRatio2->SetDirectory(0);

			std::vector<double> vecRatio;
			std::vector<double> vecSigma;
			for (unsigned int i=1; i<=histMC->GetNbinsX(); i++)
			{
				double ratio=0.0;
				double sigma = 0.0;
				if (histMC->GetBinContent(i)!=0.0) {
						sigma = sqrt(pow(histData->GetBinError(i)/histMC->GetBinContent(i),2) + pow(histData->GetBinContent(i)*histMC->GetBinError(i)/(histMC->GetBinContent(i)*histMC->GetBinContent(i)),2));
						ratio = histData->GetBinContent(i)/histMC->GetBinContent(i);
				}
				histRatio->SetBinContent(i, ratio);
				histRatio->SetBinError(i, sigma);
				ratio=0.0;
				sigma = 0.0;
				if (histMC2!=0)
					if (histMC2->GetBinContent(i)!=0.0) {
						sigma = sqrt(pow(histData->GetBinError(i)/histMC2->GetBinContent(i),2) + pow(histData->GetBinContent(i)*histMC2->GetBinError(i)/(histMC2->GetBinContent(i)*histMC2->GetBinContent(i)),2));
						ratio = histData->GetBinContent(i)/histMC2->GetBinContent(i);
					}
				histRatio2->SetBinContent(i, ratio);
				histRatio2->SetBinError(i, sigma);
			}
			
			histRatio->Draw("E2");
			if (histMC2!=0) {
				histRatio2->SetFillColor(kGray);
				histRatio2->SetMarkerSize(0.9);
				histRatio2->SetMarkerColor(kGray+1);
				histRatio2->Draw("E2same");
				histRatio2->Draw("same");
			}

			histRatio->Draw("E2same");
			histRatio->Draw("same");

			TLine lineRatio;
			lineRatio.SetLineStyle(7);
			lineRatio.SetLineWidth(1);
			lineRatio.SetLineColor(kTeal+3);
			lineRatio.DrawLine(histRatio->GetXaxis()->GetXmin(), 1.0, histRatio->GetXaxis()->GetXmax(), 1.0);
			c1_1->cd();
	}


#endif
