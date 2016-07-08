#include "EWPlotMacros.h"


void SpatialResolution1() {
	TCanvas *c1 			= EWCreateTCanvas(500);

	TH1F	*hist = new TH1F("Res", "", 30, -950, 950);

	EWBeautify(hist, 	FILL_1, "#Deltax (Upper-Lower Layer) [#mum]", "# Recorded Event");
	for (unsigned int i=1; i<30; i++)	hist->Fill(gRandom->Gaus(5, 400));
	for (unsigned int i=1; i<200; i++)	hist->Fill(gRandom->Gaus(5, 180));
	hist->SetFillColor(kRed+1);
//	EWSetXRange(hist,-4, 4);
//	EWSetYRange(hist,10, 400);

	TF1 *func2 = new TF1("func2", "gaus", -350, 350);
	func2->SetLineColor(kAzure+1);
	hist->Fit(func2, "R");

	EWDraw(hist);
	func2->Draw("same");

	EWSetTextPosition(UP_LEFT);
	EWAddText("Recorded Events", hist);
	EWSetTextPosition(UP_RIGHT);
	EWAddText("            Incident Angle 0 #circ");
	EWAddText("            Y-Layer");
	EWAddText("            Resolution = 122#mum");
	c1->SaveAs("SpatialResolution1.pdf");
}

