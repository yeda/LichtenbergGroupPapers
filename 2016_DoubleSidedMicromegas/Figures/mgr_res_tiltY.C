{
//=========Macro generated from canvas: cc/
//=========  (Fri Aug 19 16:10:07 2016) by ROOT version5.34/18
   TCanvas *cc = new TCanvas("cc", "",1,1,800,576);
   cc->SetHighLightColor(2);
   cc->Range(-2.784876,-0.056875,10.99809,0.380625);
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
   multigraph->SetName("mgr_res_tiltY");
   multigraph->SetTitle("; Tilt angle (degrees); Spatial Resolution (mm)");
   
   TGraphErrors *gre = new TGraphErrors(7);
   gre->SetName("res__tiltY_DownX");
   gre->SetTitle("res__tiltY_DownX;Tilt angle (degrees);Spatial Resolution (mm)");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0,0.0779329);
   gre->SetPointError(0,0.5,0.000389702);
   gre->SetPoint(1,1.023193,0.077261);
   gre->SetPointError(1,0.5,0.000382424);
   gre->SetPoint(2,4.096044,0.102529);
   gre->SetPointError(2,0.5,0.000894728);
   gre->SetPoint(3,5.122516,0.122058);
   gre->SetPointError(3,0.5,0.00170027);
   gre->SetPoint(4,6.15064,0.143869);
   gre->SetPointError(4,0.5,0.00366521);
   gre->SetPoint(5,7.180756,0.164295);
   gre->SetPointError(5,0.5,0.00135175);
   gre->SetPoint(6,8.213211,0.187619);
   gre->SetPointError(6,0.5,0.0157234);
   
   TH1F *Graph_res__tiltY_DownX13 = new TH1F("Graph_res__tiltY_DownX13","res__tiltY_DownX",100,-1.421321,9.634532);
   Graph_res__tiltY_DownX13->SetMinimum(0.06423219);
   Graph_res__tiltY_DownX13->SetMaximum(0.2159888);
   Graph_res__tiltY_DownX13->SetDirectory(0);
   Graph_res__tiltY_DownX13->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_res__tiltY_DownX13->SetLineColor(ci);
   Graph_res__tiltY_DownX13->GetXaxis()->SetTitle("Tilt angle (degrees)");
   Graph_res__tiltY_DownX13->GetXaxis()->SetLabelFont(42);
   Graph_res__tiltY_DownX13->GetXaxis()->SetLabelSize(0.035);
   Graph_res__tiltY_DownX13->GetXaxis()->SetTitleSize(0.035);
   Graph_res__tiltY_DownX13->GetXaxis()->SetTitleFont(42);
   Graph_res__tiltY_DownX13->GetYaxis()->SetTitle("Spatial Resolution (mm)");
   Graph_res__tiltY_DownX13->GetYaxis()->SetLabelFont(42);
   Graph_res__tiltY_DownX13->GetYaxis()->SetLabelSize(0.035);
   Graph_res__tiltY_DownX13->GetYaxis()->SetTitleSize(0.035);
   Graph_res__tiltY_DownX13->GetYaxis()->SetTitleFont(42);
   Graph_res__tiltY_DownX13->GetZaxis()->SetLabelFont(42);
   Graph_res__tiltY_DownX13->GetZaxis()->SetLabelSize(0.035);
   Graph_res__tiltY_DownX13->GetZaxis()->SetTitleSize(0.035);
   Graph_res__tiltY_DownX13->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_res__tiltY_DownX13);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(7);
   gre->SetName("res__tiltY_DownY");
   gre->SetTitle("res__tiltY_DownY;Tilt angle (degrees);Spatial Resolution (mm)");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0,0.0745536);
   gre->SetPointError(0,0.5,0.0003611);
   gre->SetPoint(1,1.023193,0.0754105);
   gre->SetPointError(1,0.5,0.000363636);
   gre->SetPoint(2,4.096044,0.0759314);
   gre->SetPointError(2,0.5,0.00035568);
   gre->SetPoint(3,5.122516,0.0766938);
   gre->SetPointError(3,0.5,0.00033855);
   gre->SetPoint(4,6.15064,0.0766856);
   gre->SetPointError(4,0.5,0.000372764);
   gre->SetPoint(5,7.180756,0.0758405);
   gre->SetPointError(5,0.5,0.000370893);
   gre->SetPoint(6,8.213211,0.0755249);
   gre->SetPointError(6,0.5,0.000385261);
   
   TH1F *Graph_res__tiltY_DownY14 = new TH1F("Graph_res__tiltY_DownY14","res__tiltY_DownY",100,-1.421321,9.634532);
   Graph_res__tiltY_DownY14->SetMinimum(0.07390591);
   Graph_res__tiltY_DownY14->SetMaximum(0.07734495);
   Graph_res__tiltY_DownY14->SetDirectory(0);
   Graph_res__tiltY_DownY14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_res__tiltY_DownY14->SetLineColor(ci);
   Graph_res__tiltY_DownY14->GetXaxis()->SetTitle("Tilt angle (degrees)");
   Graph_res__tiltY_DownY14->GetXaxis()->SetLabelFont(42);
   Graph_res__tiltY_DownY14->GetXaxis()->SetLabelSize(0.035);
   Graph_res__tiltY_DownY14->GetXaxis()->SetTitleSize(0.035);
   Graph_res__tiltY_DownY14->GetXaxis()->SetTitleFont(42);
   Graph_res__tiltY_DownY14->GetYaxis()->SetTitle("Spatial Resolution (mm)");
   Graph_res__tiltY_DownY14->GetYaxis()->SetLabelFont(42);
   Graph_res__tiltY_DownY14->GetYaxis()->SetLabelSize(0.035);
   Graph_res__tiltY_DownY14->GetYaxis()->SetTitleSize(0.035);
   Graph_res__tiltY_DownY14->GetYaxis()->SetTitleFont(42);
   Graph_res__tiltY_DownY14->GetZaxis()->SetLabelFont(42);
   Graph_res__tiltY_DownY14->GetZaxis()->SetLabelSize(0.035);
   Graph_res__tiltY_DownY14->GetZaxis()->SetTitleSize(0.035);
   Graph_res__tiltY_DownY14->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_res__tiltY_DownY14);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(7);
   gre->SetName("res__tiltY_UpX");
   gre->SetTitle("res__tiltY_UpX;Tilt angle (degrees);Spatial Resolution (mm)");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0,0.0393163);
   gre->SetPointError(0,0.5,0.000144773);
   gre->SetPoint(1,1.023193,0.03822);
   gre->SetPointError(1,0.5,0.000137074);
   gre->SetPoint(2,4.096044,0.0419023);
   gre->SetPointError(2,0.5,0.000139981);
   gre->SetPoint(3,5.122516,0.0457063);
   gre->SetPointError(3,0.5,0.000144528);
   gre->SetPoint(4,6.15064,0.0496874);
   gre->SetPointError(4,0.5,0.000170444);
   gre->SetPoint(5,7.180756,0.0525303);
   gre->SetPointError(5,0.5,0.000186148);
   gre->SetPoint(6,8.213211,0.0575447);
   gre->SetPointError(6,0.5,0.000213498);
   
   TH1F *Graph_res__tiltY_UpX15 = new TH1F("Graph_res__tiltY_UpX15","res__tiltY_UpX",100,-1.421321,9.634532);
   Graph_res__tiltY_UpX15->SetMinimum(0.0361154);
   Graph_res__tiltY_UpX15->SetMaximum(0.05972573);
   Graph_res__tiltY_UpX15->SetDirectory(0);
   Graph_res__tiltY_UpX15->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_res__tiltY_UpX15->SetLineColor(ci);
   Graph_res__tiltY_UpX15->GetXaxis()->SetTitle("Tilt angle (degrees)");
   Graph_res__tiltY_UpX15->GetXaxis()->SetLabelFont(42);
   Graph_res__tiltY_UpX15->GetXaxis()->SetLabelSize(0.035);
   Graph_res__tiltY_UpX15->GetXaxis()->SetTitleSize(0.035);
   Graph_res__tiltY_UpX15->GetXaxis()->SetTitleFont(42);
   Graph_res__tiltY_UpX15->GetYaxis()->SetTitle("Spatial Resolution (mm)");
   Graph_res__tiltY_UpX15->GetYaxis()->SetLabelFont(42);
   Graph_res__tiltY_UpX15->GetYaxis()->SetLabelSize(0.035);
   Graph_res__tiltY_UpX15->GetYaxis()->SetTitleSize(0.035);
   Graph_res__tiltY_UpX15->GetYaxis()->SetTitleFont(42);
   Graph_res__tiltY_UpX15->GetZaxis()->SetLabelFont(42);
   Graph_res__tiltY_UpX15->GetZaxis()->SetLabelSize(0.035);
   Graph_res__tiltY_UpX15->GetZaxis()->SetTitleSize(0.035);
   Graph_res__tiltY_UpX15->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_res__tiltY_UpX15);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(7);
   gre->SetName("res__tiltY_UpY");
   gre->SetTitle("res__tiltY_UpY;Tilt angle (degrees);Spatial Resolution (mm)");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#009900");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0,0.0398623);
   gre->SetPointError(0,0.5,0.000145481);
   gre->SetPoint(1,1.023193,0.0394995);
   gre->SetPointError(1,0.5,0.000141668);
   gre->SetPoint(2,4.096044,0.0401968);
   gre->SetPointError(2,0.5,0.000139271);
   gre->SetPoint(3,5.122516,0.0401004);
   gre->SetPointError(3,0.5,0.000131989);
   gre->SetPoint(4,6.15064,0.0403727);
   gre->SetPointError(4,0.5,0.000144294);
   gre->SetPoint(5,7.180756,0.040506);
   gre->SetPointError(5,0.5,0.000147176);
   gre->SetPoint(6,8.213211,0.0400458);
   gre->SetPointError(6,0.5,0.00015168);
   
   TH1F *Graph_res__tiltY_UpY16 = new TH1F("Graph_res__tiltY_UpY16","res__tiltY_UpY",100,-1.421321,9.634532);
   Graph_res__tiltY_UpY16->SetMinimum(0.0392283);
   Graph_res__tiltY_UpY16->SetMaximum(0.04078271);
   Graph_res__tiltY_UpY16->SetDirectory(0);
   Graph_res__tiltY_UpY16->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_res__tiltY_UpY16->SetLineColor(ci);
   Graph_res__tiltY_UpY16->GetXaxis()->SetTitle("Tilt angle (degrees)");
   Graph_res__tiltY_UpY16->GetXaxis()->SetLabelFont(42);
   Graph_res__tiltY_UpY16->GetXaxis()->SetLabelSize(0.035);
   Graph_res__tiltY_UpY16->GetXaxis()->SetTitleSize(0.035);
   Graph_res__tiltY_UpY16->GetXaxis()->SetTitleFont(42);
   Graph_res__tiltY_UpY16->GetYaxis()->SetTitle("Spatial Resolution (mm)");
   Graph_res__tiltY_UpY16->GetYaxis()->SetLabelFont(42);
   Graph_res__tiltY_UpY16->GetYaxis()->SetLabelSize(0.035);
   Graph_res__tiltY_UpY16->GetYaxis()->SetTitleSize(0.035);
   Graph_res__tiltY_UpY16->GetYaxis()->SetTitleFont(42);
   Graph_res__tiltY_UpY16->GetZaxis()->SetLabelFont(42);
   Graph_res__tiltY_UpY16->GetZaxis()->SetLabelSize(0.035);
   Graph_res__tiltY_UpY16->GetZaxis()->SetTitleSize(0.035);
   Graph_res__tiltY_UpY16->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_res__tiltY_UpY16);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle(" Tilt angle (degrees)");
   multigraph->GetXaxis()->SetRange(0,101);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.045);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleOffset(1.2);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle(" Spatial Resolution (mm)");
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
   TLegendEntry *entry=leg->AddEntry("res__tiltY_DownX","DownX","ep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("res__tiltY_DownY","DownY","ep");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("res__tiltY_UpX","UpX","ep");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("res__tiltY_UpY","UpY","ep");

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
