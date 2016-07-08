#include "EWPlotMacros.h"


void AngleResolution1() {
	TCanvas *c1 			= EWCreateTCanvas(500);

	TH1F	*hist = new TH1F("Res", "", 30, -45, 45);

	EWBeautify(hist, 	FILL_1, "Reconstructed Angle", "# Recorded Event");
	for (unsigned int i=1; i<30; i++)	hist->Fill(gRandom->Gaus(8, 6));
	for (unsigned int i=1; i<200; i++)	hist->Fill(gRandom->Gaus(9, 2));
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
	EWAddText("Incident Angle 8#circ");
	EWAddText("X-Layer");
	EWAddText("Resolution = 2.1#circ");
	c1->SaveAs("AngleResolution1.pdf");
}

