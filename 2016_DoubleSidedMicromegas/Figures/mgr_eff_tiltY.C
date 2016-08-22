{
//=========Macro generated from canvas: cc/
//=========  (Fri Aug 19 16:10:07 2016) by ROOT version5.34/18
   TCanvas *cc = new TCanvas("cc", "",1,1,800,576);
   cc->SetHighLightColor(2);
   cc->Range(-2.649749,0.635,10.86296,1.135);
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
   multigraph->SetName("mgr_eff_tiltY");
   multigraph->SetTitle("; Tilt Angle (degrees); Efficiency");
   
   TGraphErrors *gre = new TGraphErrors(7);
   gre->SetName("eff__tiltY_DownX");
   gre->SetTitle("eff__tiltY_DownX;Tilt angle (degrees);Efficiency");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0,0.89953);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,1.023193,0.923773);
   gre->SetPointError(1,0.5,0);
   gre->SetPoint(2,4.096044,0.928471);
   gre->SetPointError(2,0.5,0);
   gre->SetPoint(3,5.122516,0.898977);
   gre->SetPointError(3,0.5,0);
   gre->SetPoint(4,6.15064,0.890699);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,7.180756,0.858334);
   gre->SetPointError(5,0.5,0);
   gre->SetPoint(6,8.213211,0.804583);
   gre->SetPointError(6,0.5,0);
   
   TH1F *Graph_eff__tiltY_DownX9 = new TH1F("Graph_eff__tiltY_DownX9","eff__tiltY_DownX",100,-1.421321,9.634532);
   Graph_eff__tiltY_DownX9->SetMinimum(0.7921942);
   Graph_eff__tiltY_DownX9->SetMaximum(0.9408598);
   Graph_eff__tiltY_DownX9->SetDirectory(0);
   Graph_eff__tiltY_DownX9->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_eff__tiltY_DownX9->SetLineColor(ci);
   Graph_eff__tiltY_DownX9->GetXaxis()->SetTitle("Tilt angle (degrees)");
   Graph_eff__tiltY_DownX9->GetXaxis()->SetLabelFont(42);
   Graph_eff__tiltY_DownX9->GetXaxis()->SetLabelSize(0.035);
   Graph_eff__tiltY_DownX9->GetXaxis()->SetTitleSize(0.035);
   Graph_eff__tiltY_DownX9->GetXaxis()->SetTitleFont(42);
   Graph_eff__tiltY_DownX9->GetYaxis()->SetTitle("Efficiency");
   Graph_eff__tiltY_DownX9->GetYaxis()->SetLabelFont(42);
   Graph_eff__tiltY_DownX9->GetYaxis()->SetLabelSize(0.035);
   Graph_eff__tiltY_DownX9->GetYaxis()->SetTitleSize(0.035);
   Graph_eff__tiltY_DownX9->GetYaxis()->SetTitleFont(42);
   Graph_eff__tiltY_DownX9->GetZaxis()->SetLabelFont(42);
   Graph_eff__tiltY_DownX9->GetZaxis()->SetLabelSize(0.035);
   Graph_eff__tiltY_DownX9->GetZaxis()->SetTitleSize(0.035);
   Graph_eff__tiltY_DownX9->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_eff__tiltY_DownX9);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(7);
   gre->SetName("eff__tiltY_DownY");
   gre->SetTitle("eff__tiltY_DownY;Tilt angle (degrees);Efficiency");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0,0.982386);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,1.023193,0.988674);
   gre->SetPointError(1,0.5,0);
   gre->SetPoint(2,4.096044,0.99133);
   gre->SetPointError(2,0.5,0);
   gre->SetPoint(3,5.122516,0.987999);
   gre->SetPointError(3,0.5,0);
   gre->SetPoint(4,6.15064,0.992902);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,7.180756,0.990686);
   gre->SetPointError(5,0.5,0);
   gre->SetPoint(6,8.213211,0.98948);
   gre->SetPointError(6,0.5,0);
   
   TH1F *Graph_eff__tiltY_DownY10 = new TH1F("Graph_eff__tiltY_DownY10","eff__tiltY_DownY",100,-1.421321,9.634532);
   Graph_eff__tiltY_DownY10->SetMinimum(0.9813344);
   Graph_eff__tiltY_DownY10->SetMaximum(0.9939536);
   Graph_eff__tiltY_DownY10->SetDirectory(0);
   Graph_eff__tiltY_DownY10->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_eff__tiltY_DownY10->SetLineColor(ci);
   Graph_eff__tiltY_DownY10->GetXaxis()->SetTitle("Tilt angle (degrees)");
   Graph_eff__tiltY_DownY10->GetXaxis()->SetLabelFont(42);
   Graph_eff__tiltY_DownY10->GetXaxis()->SetLabelSize(0.035);
   Graph_eff__tiltY_DownY10->GetXaxis()->SetTitleSize(0.035);
   Graph_eff__tiltY_DownY10->GetXaxis()->SetTitleFont(42);
   Graph_eff__tiltY_DownY10->GetYaxis()->SetTitle("Efficiency");
   Graph_eff__tiltY_DownY10->GetYaxis()->SetLabelFont(42);
   Graph_eff__tiltY_DownY10->GetYaxis()->SetLabelSize(0.035);
   Graph_eff__tiltY_DownY10->GetYaxis()->SetTitleSize(0.035);
   Graph_eff__tiltY_DownY10->GetYaxis()->SetTitleFont(42);
   Graph_eff__tiltY_DownY10->GetZaxis()->SetLabelFont(42);
   Graph_eff__tiltY_DownY10->GetZaxis()->SetLabelSize(0.035);
   Graph_eff__tiltY_DownY10->GetZaxis()->SetTitleSize(0.035);
   Graph_eff__tiltY_DownY10->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_eff__tiltY_DownY10);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(7);
   gre->SetName("eff__tiltY_UpX");
   gre->SetTitle("eff__tiltY_UpX;Tilt angle (degrees);Efficiency");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0,0.961387);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,1.023193,0.965148);
   gre->SetPointError(1,0.5,0);
   gre->SetPoint(2,4.096044,0.98651);
   gre->SetPointError(2,0.5,0);
   gre->SetPoint(3,5.122516,0.979393);
   gre->SetPointError(3,0.5,0);
   gre->SetPoint(4,6.15064,0.985419);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,7.180756,0.983359);
   gre->SetPointError(5,0.5,0);
   gre->SetPoint(6,8.213211,0.973799);
   gre->SetPointError(6,0.5,0);
   
   TH1F *Graph_eff__tiltY_UpX11 = new TH1F("Graph_eff__tiltY_UpX11","eff__tiltY_UpX",100,-1.421321,9.634532);
   Graph_eff__tiltY_UpX11->SetMinimum(0.9588747);
   Graph_eff__tiltY_UpX11->SetMaximum(0.9890223);
   Graph_eff__tiltY_UpX11->SetDirectory(0);
   Graph_eff__tiltY_UpX11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_eff__tiltY_UpX11->SetLineColor(ci);
   Graph_eff__tiltY_UpX11->GetXaxis()->SetTitle("Tilt angle (degrees)");
   Graph_eff__tiltY_UpX11->GetXaxis()->SetLabelFont(42);
   Graph_eff__tiltY_UpX11->GetXaxis()->SetLabelSize(0.035);
   Graph_eff__tiltY_UpX11->GetXaxis()->SetTitleSize(0.035);
   Graph_eff__tiltY_UpX11->GetXaxis()->SetTitleFont(42);
   Graph_eff__tiltY_UpX11->GetYaxis()->SetTitle("Efficiency");
   Graph_eff__tiltY_UpX11->GetYaxis()->SetLabelFont(42);
   Graph_eff__tiltY_UpX11->GetYaxis()->SetLabelSize(0.035);
   Graph_eff__tiltY_UpX11->GetYaxis()->SetTitleSize(0.035);
   Graph_eff__tiltY_UpX11->GetYaxis()->SetTitleFont(42);
   Graph_eff__tiltY_UpX11->GetZaxis()->SetLabelFont(42);
   Graph_eff__tiltY_UpX11->GetZaxis()->SetLabelSize(0.035);
   Graph_eff__tiltY_UpX11->GetZaxis()->SetTitleSize(0.035);
   Graph_eff__tiltY_UpX11->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_eff__tiltY_UpX11);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(7);
   gre->SetName("eff__tiltY_UpY");
   gre->SetTitle("eff__tiltY_UpY;Tilt angle (degrees);Efficiency");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#009900");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0,0.935428);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,1.023193,0.944279);
   gre->SetPointError(1,0.5,0);
   gre->SetPoint(2,4.096044,0.939749);
   gre->SetPointError(2,0.5,0);
   gre->SetPoint(3,5.122516,0.937654);
   gre->SetPointError(3,0.5,0);
   gre->SetPoint(4,6.15064,0.940689);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,7.180756,0.933803);
   gre->SetPointError(5,0.5,0);
   gre->SetPoint(6,8.213211,0.93182);
   gre->SetPointError(6,0.5,0);
   
   TH1F *Graph_eff__tiltY_UpY12 = new TH1F("Graph_eff__tiltY_UpY12","eff__tiltY_UpY",100,-1.421321,9.634532);
   Graph_eff__tiltY_UpY12->SetMinimum(0.9305741);
   Graph_eff__tiltY_UpY12->SetMaximum(0.9455249);
   Graph_eff__tiltY_UpY12->SetDirectory(0);
   Graph_eff__tiltY_UpY12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_eff__tiltY_UpY12->SetLineColor(ci);
   Graph_eff__tiltY_UpY12->GetXaxis()->SetTitle("Tilt angle (degrees)");
   Graph_eff__tiltY_UpY12->GetXaxis()->SetLabelFont(42);
   Graph_eff__tiltY_UpY12->GetXaxis()->SetLabelSize(0.035);
   Graph_eff__tiltY_UpY12->GetXaxis()->SetTitleSize(0.035);
   Graph_eff__tiltY_UpY12->GetXaxis()->SetTitleFont(42);
   Graph_eff__tiltY_UpY12->GetYaxis()->SetTitle("Efficiency");
   Graph_eff__tiltY_UpY12->GetYaxis()->SetLabelFont(42);
   Graph_eff__tiltY_UpY12->GetYaxis()->SetLabelSize(0.035);
   Graph_eff__tiltY_UpY12->GetYaxis()->SetTitleSize(0.035);
   Graph_eff__tiltY_UpY12->GetYaxis()->SetTitleFont(42);
   Graph_eff__tiltY_UpY12->GetZaxis()->SetLabelFont(42);
   Graph_eff__tiltY_UpY12->GetZaxis()->SetLabelSize(0.035);
   Graph_eff__tiltY_UpY12->GetZaxis()->SetTitleSize(0.035);
   Graph_eff__tiltY_UpY12->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_eff__tiltY_UpY12);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle(" Tilt Angle (degrees)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.045);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleOffset(1.2);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle(" Efficiency");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.045);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(1.2);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.35,0.2,0.65,0.35,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("eff__tiltY_DownX","DownX","ep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("eff__tiltY_DownY","DownY","ep");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("eff__tiltY_UpX","UpX","ep");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("eff__tiltY_UpY","UpY","ep");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   cc->Modified();
   cc->cd();
   cc->SetSelected(cc);
}
