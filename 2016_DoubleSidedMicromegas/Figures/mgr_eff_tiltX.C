{
//=========Macro generated from canvas: cc/
//=========  (Fri Aug 19 16:10:07 2016) by ROOT version5.34/18
   TCanvas *cc = new TCanvas("cc", "",0,0,800,600);
   cc->SetHighLightColor(2);
   cc->Range(-15.4,0.635,15.4,1.135);
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
   multigraph->SetName("mgr_eff_tiltX");
   multigraph->SetTitle("; Tilt Angle (degrees); Efficiency");
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("eff__tiltX_DownX");
   gre->SetTitle("eff__tiltX_DownX;Tilt angle (degrees);Efficiency");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-10,0.95251);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,-5,0.95679);
   gre->SetPointError(1,0.5,0);
   gre->SetPoint(2,0,0.929936);
   gre->SetPointError(2,0.5,0);
   gre->SetPoint(3,1,0.943281);
   gre->SetPointError(3,0.5,0);
   gre->SetPoint(4,2,0.939869);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,4,0.935168);
   gre->SetPointError(5,0.5,0);
   gre->SetPoint(6,5,0.944233);
   gre->SetPointError(6,0.5,0);
   gre->SetPoint(7,7,0.976073);
   gre->SetPointError(7,0.5,0);
   gre->SetPoint(8,8,0.967665);
   gre->SetPointError(8,0.5,0);
   gre->SetPoint(9,10,0.903907);
   gre->SetPointError(9,0.5,0);
   
   TH1F *Graph_eff__tiltX_DownX1 = new TH1F("Graph_eff__tiltX_DownX1","eff__tiltX_DownX",100,-12.6,12.6);
   Graph_eff__tiltX_DownX1->SetMinimum(0.8966904);
   Graph_eff__tiltX_DownX1->SetMaximum(0.9832896);
   Graph_eff__tiltX_DownX1->SetDirectory(0);
   Graph_eff__tiltX_DownX1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_eff__tiltX_DownX1->SetLineColor(ci);
   Graph_eff__tiltX_DownX1->GetXaxis()->SetTitle("Tilt angle (degrees)");
   Graph_eff__tiltX_DownX1->GetXaxis()->SetLabelFont(42);
   Graph_eff__tiltX_DownX1->GetXaxis()->SetLabelSize(0.035);
   Graph_eff__tiltX_DownX1->GetXaxis()->SetTitleSize(0.035);
   Graph_eff__tiltX_DownX1->GetXaxis()->SetTitleFont(42);
   Graph_eff__tiltX_DownX1->GetYaxis()->SetTitle("Efficiency");
   Graph_eff__tiltX_DownX1->GetYaxis()->SetLabelFont(42);
   Graph_eff__tiltX_DownX1->GetYaxis()->SetLabelSize(0.035);
   Graph_eff__tiltX_DownX1->GetYaxis()->SetTitleSize(0.035);
   Graph_eff__tiltX_DownX1->GetYaxis()->SetTitleFont(42);
   Graph_eff__tiltX_DownX1->GetZaxis()->SetLabelFont(42);
   Graph_eff__tiltX_DownX1->GetZaxis()->SetLabelSize(0.035);
   Graph_eff__tiltX_DownX1->GetZaxis()->SetTitleSize(0.035);
   Graph_eff__tiltX_DownX1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_eff__tiltX_DownX1);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(10);
   gre->SetName("eff__tiltX_DownY");
   gre->SetTitle("eff__tiltX_DownY;Tilt angle (degrees);Efficiency");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-10,0.990996);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,-5,0.976394);
   gre->SetPointError(1,0.5,0);
   gre->SetPoint(2,0,0.985021);
   gre->SetPointError(2,0.5,0);
   gre->SetPoint(3,1,0.992091);
   gre->SetPointError(3,0.5,0);
   gre->SetPoint(4,2,0.993421);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,4,0.987733);
   gre->SetPointError(5,0.5,0);
   gre->SetPoint(6,5,0.988907);
   gre->SetPointError(6,0.5,0);
   gre->SetPoint(7,7,0.98301);
   gre->SetPointError(7,0.5,0);
   gre->SetPoint(8,8,0.982272);
   gre->SetPointError(8,0.5,0);
   gre->SetPoint(9,10,0.984096);
   gre->SetPointError(9,0.5,0);
   
   TH1F *Graph_eff__tiltX_DownY2 = new TH1F("Graph_eff__tiltX_DownY2","eff__tiltX_DownY",100,-12.6,12.6);
   Graph_eff__tiltX_DownY2->SetMinimum(0.9746913);
   Graph_eff__tiltX_DownY2->SetMaximum(0.9951237);
   Graph_eff__tiltX_DownY2->SetDirectory(0);
   Graph_eff__tiltX_DownY2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_eff__tiltX_DownY2->SetLineColor(ci);
   Graph_eff__tiltX_DownY2->GetXaxis()->SetTitle("Tilt angle (degrees)");
   Graph_eff__tiltX_DownY2->GetXaxis()->SetLabelFont(42);
   Graph_eff__tiltX_DownY2->GetXaxis()->SetLabelSize(0.035);
   Graph_eff__tiltX_DownY2->GetXaxis()->SetTitleSize(0.035);
   Graph_eff__tiltX_DownY2->GetXaxis()->SetTitleFont(42);
   Graph_eff__tiltX_DownY2->GetYaxis()->SetTitle("Efficiency");
   Graph_eff__tiltX_DownY2->GetYaxis()->SetLabelFont(42);
   Graph_eff__tiltX_DownY2->GetYaxis()->SetLabelSize(0.035);
   Graph_eff__tiltX_DownY2->GetYaxis()->SetTitleSize(0.035);
   Graph_eff__tiltX_DownY2->GetYaxis()->SetTitleFont(42);
   Graph_eff__tiltX_DownY2->GetZaxis()->SetLabelFont(42);
   Graph_eff__tiltX_DownY2->GetZaxis()->SetLabelSize(0.035);
   Graph_eff__tiltX_DownY2->GetZaxis()->SetTitleSize(0.035);
   Graph_eff__tiltX_DownY2->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_eff__tiltX_DownY2);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(10);
   gre->SetName("eff__tiltX_UpX");
   gre->SetTitle("eff__tiltX_UpX;Tilt angle (degrees);Efficiency");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-10,0.993062);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,-5,0.98706);
   gre->SetPointError(1,0.5,0);
   gre->SetPoint(2,0,0.988353);
   gre->SetPointError(2,0.5,0);
   gre->SetPoint(3,1,0.988284);
   gre->SetPointError(3,0.5,0);
   gre->SetPoint(4,2,0.98751);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,4,0.990416);
   gre->SetPointError(5,0.5,0);
   gre->SetPoint(6,5,0.99159);
   gre->SetPointError(6,0.5,0);
   gre->SetPoint(7,7,0.99455);
   gre->SetPointError(7,0.5,0);
   gre->SetPoint(8,8,0.99883);
   gre->SetPointError(8,0.5,0);
   gre->SetPoint(9,10,0.995906);
   gre->SetPointError(9,0.5,0);
   
   TH1F *Graph_eff__tiltX_UpX3 = new TH1F("Graph_eff__tiltX_UpX3","eff__tiltX_UpX",100,-12.6,12.6);
   Graph_eff__tiltX_UpX3->SetMinimum(0.985883);
   Graph_eff__tiltX_UpX3->SetMaximum(1.000007);
   Graph_eff__tiltX_UpX3->SetDirectory(0);
   Graph_eff__tiltX_UpX3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_eff__tiltX_UpX3->SetLineColor(ci);
   Graph_eff__tiltX_UpX3->GetXaxis()->SetTitle("Tilt angle (degrees)");
   Graph_eff__tiltX_UpX3->GetXaxis()->SetLabelFont(42);
   Graph_eff__tiltX_UpX3->GetXaxis()->SetLabelSize(0.035);
   Graph_eff__tiltX_UpX3->GetXaxis()->SetTitleSize(0.035);
   Graph_eff__tiltX_UpX3->GetXaxis()->SetTitleFont(42);
   Graph_eff__tiltX_UpX3->GetYaxis()->SetTitle("Efficiency");
   Graph_eff__tiltX_UpX3->GetYaxis()->SetLabelFont(42);
   Graph_eff__tiltX_UpX3->GetYaxis()->SetLabelSize(0.035);
   Graph_eff__tiltX_UpX3->GetYaxis()->SetTitleSize(0.035);
   Graph_eff__tiltX_UpX3->GetYaxis()->SetTitleFont(42);
   Graph_eff__tiltX_UpX3->GetZaxis()->SetLabelFont(42);
   Graph_eff__tiltX_UpX3->GetZaxis()->SetLabelSize(0.035);
   Graph_eff__tiltX_UpX3->GetZaxis()->SetTitleSize(0.035);
   Graph_eff__tiltX_UpX3->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_eff__tiltX_UpX3);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(10);
   gre->SetName("eff__tiltX_UpY");
   gre->SetTitle("eff__tiltX_UpY;Tilt angle (degrees);Efficiency");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#009900");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-10,0.911426);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,-5,0.9279);
   gre->SetPointError(1,0.5,0);
   gre->SetPoint(2,0,0.944857);
   gre->SetPointError(2,0.5,0);
   gre->SetPoint(3,1,0.944775);
   gre->SetPointError(3,0.5,0);
   gre->SetPoint(4,2,0.940518);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,4,0.936589);
   gre->SetPointError(5,0.5,0);
   gre->SetPoint(6,5,0.935449);
   gre->SetPointError(6,0.5,0);
   gre->SetPoint(7,7,0.927513);
   gre->SetPointError(7,0.5,0);
   gre->SetPoint(8,8,0.878187);
   gre->SetPointError(8,0.5,0);
   gre->SetPoint(9,10,0.875538);
   gre->SetPointError(9,0.5,0);
   
   TH1F *Graph_eff__tiltX_UpY4 = new TH1F("Graph_eff__tiltX_UpY4","eff__tiltX_UpY",100,-12.6,12.6);
   Graph_eff__tiltX_UpY4->SetMinimum(0.8686061);
   Graph_eff__tiltX_UpY4->SetMaximum(0.9517889);
   Graph_eff__tiltX_UpY4->SetDirectory(0);
   Graph_eff__tiltX_UpY4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_eff__tiltX_UpY4->SetLineColor(ci);
   Graph_eff__tiltX_UpY4->GetXaxis()->SetTitle("Tilt angle (degrees)");
   Graph_eff__tiltX_UpY4->GetXaxis()->SetLabelFont(42);
   Graph_eff__tiltX_UpY4->GetXaxis()->SetLabelSize(0.035);
   Graph_eff__tiltX_UpY4->GetXaxis()->SetTitleSize(0.035);
   Graph_eff__tiltX_UpY4->GetXaxis()->SetTitleFont(42);
   Graph_eff__tiltX_UpY4->GetYaxis()->SetTitle("Efficiency");
   Graph_eff__tiltX_UpY4->GetYaxis()->SetLabelFont(42);
   Graph_eff__tiltX_UpY4->GetYaxis()->SetLabelSize(0.035);
   Graph_eff__tiltX_UpY4->GetYaxis()->SetTitleSize(0.035);
   Graph_eff__tiltX_UpY4->GetYaxis()->SetTitleFont(42);
   Graph_eff__tiltX_UpY4->GetZaxis()->SetLabelFont(42);
   Graph_eff__tiltX_UpY4->GetZaxis()->SetLabelSize(0.035);
   Graph_eff__tiltX_UpY4->GetZaxis()->SetTitleSize(0.035);
   Graph_eff__tiltX_UpY4->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_eff__tiltX_UpY4);
   
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
   TLegendEntry *entry=leg->AddEntry("eff__tiltX_DownX","DownX","ep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("eff__tiltX_DownY","DownY","ep");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("eff__tiltX_UpX","UpX","ep");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("eff__tiltX_UpY","UpY","ep");

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
