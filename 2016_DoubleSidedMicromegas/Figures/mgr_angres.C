{
//=========Macro generated from canvas: cc/
//=========  (Fri Aug 19 16:10:07 2016) by ROOT version5.34/18
   TCanvas *cc = new TCanvas("cc", "",1,1,800,576);
   cc->SetHighLightColor(2);
   cc->Range(-3.1955,0.02083728,13.1285,0.3755329);
   cc->SetFillColor(0);
   cc->SetBorderMode(0);
   cc->SetBorderSize(2);
   cc->SetLeftMargin(0.125);
   cc->SetRightMargin(0.125);
   cc->SetTopMargin(0.07);
   cc->SetBottomMargin(0.13);
   cc->SetFrameBorderMode(0);
   cc->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mgr_angres");
   multigraph->SetTitle("; Tilt Angle (degrees); Angular Resolution (degrees)");
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("angres_tiltX_Down");
   gre->SetTitle("angres_tiltX_Down;Tilt angle (degrees);Angular Resolution (degrees)");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-10,0.312676);
   gre->SetPointError(0,0.5,0.0134003);
   gre->SetPoint(1,-5,0.160322);
   gre->SetPointError(1,0.5,0.00123419);
   gre->SetPoint(2,0,0.0804651);
   gre->SetPointError(2,0.5,0.000619366);
   gre->SetPoint(3,1,0.10456);
   gre->SetPointError(3,0.5,0.00120395);
   gre->SetPoint(4,2,0.123059);
   gre->SetPointError(4,0.5,0.0026125);
   gre->SetPoint(5,4,0.171379);
   gre->SetPointError(5,0.5,0.0131858);
   gre->SetPoint(6,5,0.202746);
   gre->SetPointError(6,0.5,0.034626);
   gre->SetPoint(7,7,0.261461);
   gre->SetPointError(7,0.5,0.00682571);
   gre->SetPoint(8,8,0.300802);
   gre->SetPointError(8,0.5,0.0110782);
   gre->SetPoint(9,10,0.32263);
   gre->SetPointError(9,0.5,0.0151762);
   
   TH1F *Graph_angres_tiltX_Down17 = new TH1F("Graph_angres_tiltX_Down17","angres_tiltX_Down",100,-12.6,12.6);
   Graph_angres_tiltX_Down17->SetMinimum(0.05404969);
   Graph_angres_tiltX_Down17->SetMaximum(0.3636022);
   Graph_angres_tiltX_Down17->SetDirectory(0);
   Graph_angres_tiltX_Down17->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_angres_tiltX_Down17->SetLineColor(ci);
   Graph_angres_tiltX_Down17->GetXaxis()->SetTitle("Tilt angle (degrees)");
   Graph_angres_tiltX_Down17->GetXaxis()->SetLabelFont(42);
   Graph_angres_tiltX_Down17->GetXaxis()->SetLabelSize(0.035);
   Graph_angres_tiltX_Down17->GetXaxis()->SetTitleSize(0.035);
   Graph_angres_tiltX_Down17->GetXaxis()->SetTitleFont(42);
   Graph_angres_tiltX_Down17->GetYaxis()->SetTitle("Angular Resolution (degrees)");
   Graph_angres_tiltX_Down17->GetYaxis()->SetLabelFont(42);
   Graph_angres_tiltX_Down17->GetYaxis()->SetLabelSize(0.035);
   Graph_angres_tiltX_Down17->GetYaxis()->SetTitleSize(0.035);
   Graph_angres_tiltX_Down17->GetYaxis()->SetTitleFont(42);
   Graph_angres_tiltX_Down17->GetZaxis()->SetLabelFont(42);
   Graph_angres_tiltX_Down17->GetZaxis()->SetLabelSize(0.035);
   Graph_angres_tiltX_Down17->GetZaxis()->SetTitleSize(0.035);
   Graph_angres_tiltX_Down17->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_angres_tiltX_Down17);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(7);
   gre->SetName("angres_tiltY_Down");
   gre->SetTitle("angres_tiltY_Down;Tilt angle (degrees);Angular Resolution (degrees)");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0,0.0846189);
   gre->SetPointError(0,0.5,0.00074808);
   gre->SetPoint(1,1.023193,0.096498);
   gre->SetPointError(1,0.5,0.000948961);
   gre->SetPoint(2,4.096044,0.136206);
   gre->SetPointError(2,0.5,0.000720737);
   gre->SetPoint(3,5.122516,0.159176);
   gre->SetPointError(3,0.5,0.00113826);
   gre->SetPoint(4,6.15064,0.18994);
   gre->SetPointError(4,0.5,0.00230119);
   gre->SetPoint(5,7.180756,0.215266);
   gre->SetPointError(5,0.5,0.0036553);
   gre->SetPoint(6,8.213211,0.249326);
   gre->SetPointError(6,0.5,0.00631888);
   
   TH1F *Graph_angres_tiltY_Down18 = new TH1F("Graph_angres_tiltY_Down18","angres_tiltY_Down",100,-1.421321,9.634532);
   Graph_angres_tiltY_Down18->SetMinimum(0.06669341);
   Graph_angres_tiltY_Down18->SetMaximum(0.2728223);
   Graph_angres_tiltY_Down18->SetDirectory(0);
   Graph_angres_tiltY_Down18->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_angres_tiltY_Down18->SetLineColor(ci);
   Graph_angres_tiltY_Down18->GetXaxis()->SetTitle("Tilt angle (degrees)");
   Graph_angres_tiltY_Down18->GetXaxis()->SetLabelFont(42);
   Graph_angres_tiltY_Down18->GetXaxis()->SetLabelSize(0.035);
   Graph_angres_tiltY_Down18->GetXaxis()->SetTitleSize(0.035);
   Graph_angres_tiltY_Down18->GetXaxis()->SetTitleFont(42);
   Graph_angres_tiltY_Down18->GetYaxis()->SetTitle("Angular Resolution (degrees)");
   Graph_angres_tiltY_Down18->GetYaxis()->SetLabelFont(42);
   Graph_angres_tiltY_Down18->GetYaxis()->SetLabelSize(0.035);
   Graph_angres_tiltY_Down18->GetYaxis()->SetTitleSize(0.035);
   Graph_angres_tiltY_Down18->GetYaxis()->SetTitleFont(42);
   Graph_angres_tiltY_Down18->GetZaxis()->SetLabelFont(42);
   Graph_angres_tiltY_Down18->GetZaxis()->SetLabelSize(0.035);
   Graph_angres_tiltY_Down18->GetZaxis()->SetTitleSize(0.035);
   Graph_angres_tiltY_Down18->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_angres_tiltY_Down18);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle(" Tilt Angle (degrees)");
   multigraph->GetXaxis()->SetRange(46,98);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.045);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleOffset(1.2);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle(" Angular Resolution (degrees)");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.045);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(1.2);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.35,0.8,0.65,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("angres_tiltX_Down","tiltX","ep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("angres_tiltY_Down","tiltY","ep");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   cc->Modified();
   cc->cd();
   cc->SetSelected(cc);
}
