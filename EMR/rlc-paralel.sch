<Qucs Schematic 0.0.19>
<Properties>
  <View=0,0,800,800,1,0,0>
  <Grid=10,10,1>
  <DataSet=rlc-paralel.dat>
  <DataDisplay=rlc-paralel.dpl>
  <OpenDisplay=1>
  <Script=rlc-paralel.m>
  <RunScript=0>
  <showFrame=0>
  <FrameText0=Title>
  <FrameText1=Drawn By:>
  <FrameText2=Date:>
  <FrameText3=Revision:>
</Properties>
<Symbol>
</Symbol>
<Components>
  <R R1 1 230 180 -26 15 0 0 "50 Ohm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <L L1 1 230 260 -26 10 0 0 "1 nH" 1 "" 0>
  <C C1 1 230 320 -26 17 0 0 "1 pF" 1 "" 0 "neutral" 0>
  <Vac V1 1 90 450 18 -26 0 1 "5V" 1 "1 kHz" 0 "0" 0 "0" 0>
  <R R2 1 90 370 15 -26 0 1 "50 Ohm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <GND * 1 180 510 0 0 0 0>
  <.AC AC1 1 470 170 0 39 0 0 "lin" 1 "1 kHz" 1 "100 kHz" 1 "19" 1 "no" 0>
</Components>
<Wires>
  <90 290 90 320 "" 0 0 0 "">
  <90 180 90 290 "" 0 0 0 "">
  <90 180 200 180 "" 0 0 0 "">
  <200 260 200 290 "" 0 0 0 "">
  <90 290 200 290 "" 0 0 0 "">
  <90 320 200 320 "" 0 0 0 "">
  <90 320 90 340 "" 0 0 0 "">
  <90 400 90 420 "" 0 0 0 "">
  <90 480 90 510 "" 0 0 0 "">
  <90 510 180 510 "" 0 0 0 "">
  <260 180 260 260 "" 0 0 0 "">
  <260 260 260 320 "" 0 0 0 "">
  <260 320 260 510 "" 0 0 0 "">
  <180 510 260 510 "" 0 0 0 "">
</Wires>
<Diagrams>
</Diagrams>
<Paintings>
</Paintings>
