{
//=========Macro generated from canvas: cc/
//=========  (Fri Aug 19 16:10:07 2016) by ROOT version5.34/18
   TCanvas *cc = new TCanvas("cc", "",1,1,800,576);
   cc->SetHighLightColor(2);
   cc->Range(-3.1955,-0.056875,13.1285,0.380625);
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
   multigraph->SetName("mgr_res_tiltX");
   multigraph->SetTitle("; Tilt angle (degrees); Spatial Resolution (mm)");
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("res__tiltX_DownX");
   gre->SetTitle("res__tiltX_DownX;Tilt angle (degrees);Spatial Resolution (mm)");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-10,0.0760281);
   gre->SetPointError(0,0.5,0.000370669);
   gre->SetPoint(1,-5,0.0756592);
   gre->SetPointError(1,0.5,0.000330267);
   gre->SetPoint(2,0,0.0770922);
   gre->SetPointError(2,0.5,0.000357011);
   gre->SetPoint(3,1,0.0758802);
   gre->SetPointError(3,0.5,0.000342297);
   gre->SetPoint(4,2,0.0762428);
   gre->SetPointError(4,0.5,0.000354224);
   gre->SetPoint(5,4,0.0764942);
   gre->SetPointError(5,0.5,0.000352954);
   gre->SetPoint(6,5,0.0757752);
   gre->SetPointError(6,0.5,0.000349089);
   gre->SetPoint(7,7,0.0770495);
   gre->SetPointError(7,0.5,0.000359986);
   gre->SetPoint(8,8,0.0812059);
   gre->SetPointError(8,0.5,0.000420025);
   gre->SetPoint(9,10,0.0766365);
   gre->SetPointError(9,0.5,0.000373085);
   
   TH1F *Graph_res__tiltX_DownX5 = new TH1F("Graph_res__tiltX_DownX5","res__tiltX_DownX",100,-12.6,12.6);
   Graph_res__tiltX_DownX5->SetMinimum(0.07469923);
   Graph_res__tiltX_DownX5->SetMaximum(0.08225562);
   Graph_res__tiltX_DownX5->SetDirectory(0);
   Graph_res__tiltX_DownX5->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_res__tiltX_DownX5->SetLineColor(ci);
   Graph_res__tiltX_DownX5->GetXaxis()->SetTitle("Tilt angle (degrees)");
   Graph_res__tiltX_DownX5->GetXaxis()->SetLabelFont(42);
   Graph_res__tiltX_DownX5->GetXaxis()->SetLabelSize(0.035);
   Graph_res__tiltX_DownX5->GetXaxis()->SetTitleSize(0.035);
   Graph_res__tiltX_DownX5->GetXaxis()->SetTitleFont(42);
   Graph_res__tiltX_DownX5->GetYaxis()->SetTitle("Spatial Resolution (mm)");
   Graph_res__tiltX_DownX5->GetYaxis()->SetLabelFont(42);
   Graph_res__tiltX_DownX5->GetYaxis()->SetLabelSize(0.035);
   Graph_res__tiltX_DownX5->GetYaxis()->SetTitleSize(0.035);
   Graph_res__tiltX_DownX5->GetYaxis()->SetTitleFont(42);
   Graph_res__tiltX_DownX5->GetZaxis()->SetLabelFont(42);
   Graph_res__tiltX_DownX5->GetZaxis()->SetLabelSize(0.035);
   Graph_res__tiltX_DownX5->GetZaxis()->SetTitleSize(0.035);
   Graph_res__tiltX_DownX5->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_res__tiltX_DownX5);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(10);
   gre->SetName("res__tiltX_DownY");
   gre->SetTitle("res__tiltX_DownY;Tilt angle (degrees);Spatial Resolution (mm)");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-10,0.249853);
   gre->SetPointError(0,0.5,0.0059405);
   gre->SetPoint(1,-5,0.12269);
   gre->SetPointError(1,0.5,0.002244);
   gre->SetPoint(2,0,0.0757673);
   gre->SetPointError(2,0.5,0.00036911);
   gre->SetPoint(3,1,0.0818598);
   gre->SetPointError(3,0.5,0.000419505);
   gre->SetPoint(4,2,0.0950175);
   gre->SetPointError(4,0.5,0.000684477);
   gre->SetPoint(5,4,0.134611);
   gre->SetPointError(5,0.5,0.00378316);
   gre->SetPoint(6,5,0.163601);
   gre->SetPointError(6,0.5,0.00172741);
   gre->SetPoint(7,7,0.202373);
   gre->SetPointError(7,0.5,0.00264821);
   gre->SetPoint(8,8,0.233408);
   gre->SetPointError(8,0.5,0.00427734);
   gre->SetPoint(9,10,0.233833);
   gre->SetPointError(9,0.5,0.0557895);
   
   TH1F *Graph_res__tiltX_DownY6 = new TH1F("Graph_res__tiltX_DownY6","res__tiltX_DownY",100,-12.6,12.6);
   Graph_res__tiltX_DownY6->SetMinimum(0.05397576);
   Graph_res__tiltX_DownY6->SetMaximum(0.3110449);
   Graph_res__tiltX_DownY6->SetDirectory(0);
   Graph_res__tiltX_DownY6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_res__tiltX_DownY6->SetLineColor(ci);
   Graph_res__tiltX_DownY6->GetXaxis()->SetTitle("Tilt angle (degrees)");
   Graph_res__tiltX_DownY6->GetXaxis()->SetLabelFont(42);
   Graph_res__tiltX_DownY6->GetXaxis()->SetLabelSize(0.035);
   Graph_res__tiltX_DownY6->GetXaxis()->SetTitleSize(0.035);
   Graph_res__tiltX_DownY6->GetXaxis()->SetTitleFont(42);
   Graph_res__tiltX_DownY6->GetYaxis()->SetTitle("Spatial Resolution (mm)");
   Graph_res__tiltX_DownY6->GetYaxis()->SetLabelFont(42);
   Graph_res__tiltX_DownY6->GetYaxis()->SetLabelSize(0.035);
   Graph_res__tiltX_DownY6->GetYaxis()->SetTitleSize(0.035);
   Graph_res__tiltX_DownY6->GetYaxis()->SetTitleFont(42);
   Graph_res__tiltX_DownY6->GetZaxis()->SetLabelFont(42);
   Graph_res__tiltX_DownY6->GetZaxis()->SetLabelSize(0.035);
   Graph_res__tiltX_DownY6->GetZaxis()->SetTitleSize(0.035);
   Graph_res__tiltX_DownY6->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_res__tiltX_DownY6);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(10);
   gre->SetName("res__tiltX_UpX");
   gre->SetTitle("res__tiltX_UpX;Tilt angle (degrees);Spatial Resolution (mm)");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-10,0.0391686);
   gre->SetPointError(0,0.5,0.000141101);
   gre->SetPoint(1,-5,0.0383054);
   gre->SetPointError(1,0.5,0.000129792);
   gre->SetPoint(2,0,0.0385163);
   gre->SetPointError(2,0.5,0.000134565);
   gre->SetPoint(3,1,0.0380594);
   gre->SetPointError(3,0.5,0.000133075);
   gre->SetPoint(4,2,0.038334);
   gre->SetPointError(4,0.5,0.000137756);
   gre->SetPoint(5,4,0.0385975);
   gre->SetPointError(5,0.5,0.000139661);
   gre->SetPoint(6,5,0.0402929);
   gre->SetPointError(6,0.5,0.000142512);
   gre->SetPoint(7,7,0.0389594);
   gre->SetPointError(7,0.5,0.000135659);
   gre->SetPoint(8,8,0.0396983);
   gre->SetPointError(8,0.5,0.000136673);
   gre->SetPoint(9,10,0.039103);
   gre->SetPointError(9,0.5,0.000145274);
   
   TH1F *Graph_res__tiltX_UpX7 = new TH1F("Graph_res__tiltX_UpX7","res__tiltX_UpX",100,-12.6,12.6);
   Graph_res__tiltX_UpX7->SetMinimum(0.03767542);
   Graph_res__tiltX_UpX7->SetMaximum(0.04068632);
   Graph_res__tiltX_UpX7->SetDirectory(0);
   Graph_res__tiltX_UpX7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_res__tiltX_UpX7->SetLineColor(ci);
   Graph_res__tiltX_UpX7->GetXaxis()->SetTitle("Tilt angle (degrees)");
   Graph_res__tiltX_UpX7->GetXaxis()->SetLabelFont(42);
   Graph_res__tiltX_UpX7->GetXaxis()->SetLabelSize(0.035);
   Graph_res__tiltX_UpX7->GetXaxis()->SetTitleSize(0.035);
   Graph_res__tiltX_UpX7->GetXaxis()->SetTitleFont(42);
   Graph_res__tiltX_UpX7->GetYaxis()->SetTitle("Spatial Resolution (mm)");
   Graph_res__tiltX_UpX7->GetYaxis()->SetLabelFont(42);
   Graph_res__tiltX_UpX7->GetYaxis()->SetLabelSize(0.035);
   Graph_res__tiltX_UpX7->GetYaxis()->SetTitleSize(0.035);
   Graph_res__tiltX_UpX7->GetYaxis()->SetTitleFont(42);
   Graph_res__tiltX_UpX7->GetZaxis()->SetLabelFont(42);
   Graph_res__tiltX_UpX7->GetZaxis()->SetLabelSize(0.035);
   Graph_res__tiltX_UpX7->GetZaxis()->SetTitleSize(0.035);
   Graph_res__tiltX_UpX7->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_res__tiltX_UpX7);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(10);
   gre->SetName("res__tiltX_UpY");
   gre->SetTitle("res__tiltX_UpY;Tilt angle (degrees);Spatial Resolution (mm)");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#009900");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-10,0.0704594);
   gre->SetPointError(0,0.5,0.000281425);
   gre->SetPoint(1,-5,0.0468914);
   gre->SetPointError(1,0.5,0.000157618);
   gre->SetPoint(2,0,0.0401355);
   gre->SetPointError(2,0.5,0.000140982);
   gre->SetPoint(3,1,0.0404049);
   gre->SetPointError(3,0.5,0.000141247);
   gre->SetPoint(4,2,0.0423592);
   gre->SetPointError(4,0.5,0.000151526);
   gre->SetPoint(5,4,0.0481919);
   gre->SetPointError(5,0.5,0.000167731);
   gre->SetPoint(6,5,0.0526685);
   gre->SetPointError(6,0.5,0.000181758);
   gre->SetPoint(7,7,0.0605722);
   gre->SetPointError(7,0.5,0.000211927);
   gre->SetPoint(8,8,0.0663175);
   gre->SetPointError(8,0.5,0.000238392);
   gre->SetPoint(9,10,0.0719498);
   gre->SetPointError(9,0.5,0.000299988);
   
   TH1F *Graph_res__tiltX_UpY8 = new TH1F("Graph_res__tiltX_UpY8","res__tiltX_UpY",100,-12.6,12.6);
   Graph_res__tiltX_UpY8->SetMinimum(0.03676899);
   Graph_res__tiltX_UpY8->SetMaximum(0.07547532);
   Graph_res__tiltX_UpY8->SetDirectory(0);
   Graph_res__tiltX_UpY8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_res__tiltX_UpY8->SetLineColor(ci);
   Graph_res__tiltX_UpY8->GetXaxis()->SetTitle("Tilt angle (degrees)");
   Graph_res__tiltX_UpY8->GetXaxis()->SetLabelFont(42);
   Graph_res__tiltX_UpY8->GetXaxis()->SetLabelSize(0.035);
   Graph_res__tiltX_UpY8->GetXaxis()->SetTitleSize(0.035);
   Graph_res__tiltX_UpY8->GetXaxis()->SetTitleFont(42);
   Graph_res__tiltX_UpY8->GetYaxis()->SetTitle("Spatial Resolution (mm)");
   Graph_res__tiltX_UpY8->GetYaxis()->SetLabelFont(42);
   Graph_res__tiltX_UpY8->GetYaxis()->SetLabelSize(0.035);
   Graph_res__tiltX_UpY8->GetYaxis()->SetTitleSize(0.035);
   Graph_res__tiltX_UpY8->GetYaxis()->SetTitleFont(42);
   Graph_res__tiltX_UpY8->GetZaxis()->SetLabelFont(42);
   Graph_res__tiltX_UpY8->GetZaxis()->SetLabelSize(0.035);
   Graph_res__tiltX_UpY8->GetZaxis()->SetTitleSize(0.035);
   Graph_res__tiltX_UpY8->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_res__tiltX_UpY8);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle(" Tilt angle (degrees)");
   multigraph->GetXaxis()->SetRange(46,98);
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
   TLegendEntry *entry=leg->AddEntry("res__tiltX_DownX","DownX","ep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("res__tiltX_DownY","DownY","ep");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("res__tiltX_UpX","UpX","ep");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("res__tiltX_UpY","UpY","ep");

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
