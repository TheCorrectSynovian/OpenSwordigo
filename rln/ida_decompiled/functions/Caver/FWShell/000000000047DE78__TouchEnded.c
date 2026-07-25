/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047DE78
 * Mangled: _ZN5Caver7FWShell10TouchEndedERKNS_7FWTouchE
 * Demangled: Caver::FWShell::TouchEnded(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x00000000001FBA30  Caver::FWShell::TouchEnded(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000001F9770  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::erase(Caver::FWTouch const&)
 *
 * Referenced strings: 19
 *   insn=0x000000000047DE78 string=0x000000000047DE7C "@"
 *   insn=0x000000000047DE7C string=0x000000000047DE80 "J"
 *   insn=0x000000000047DE80 string=0x000000000047DE84 "+"
 *   insn=0x000000000047DE88 string=0x000000000047DE8C "L"
 *   insn=0x000000000047DE8C string=0x000000000047DE90 "Ma"
 *   insn=0x000000000047DE90 string=0x000000000047DE94 "NA"
 *   insn=0x000000000047DE9C string=0x000000000047DEA0 ")1"
 *   insn=0x000000000047DEA4 string=0x000000000047DEA8 "*"
 *   insn=0x000000000047DEA8 string=0x000000000047DEAC "?"
 *   insn=0x000000000047DEAC string=0x000000000047DEB0 " "
 *   insn=0x000000000047DEB0 string=0x000000000047DEB4 "*"
 *   insn=0x000000000047DEB4 string=0x000000000047DEB8 "+"
 *   insn=0x000000000047DEB8 string=0x000000000047DEBC "_"
 *   insn=0x000000000047DEBC string=0x000000000047DEC0 "\t1"
 *   insn=0x000000000047DEC0 string=0x000000000047DEC4 "?"
 *   insn=0x000000000047DED4 string=0x000000000047DED8 "&"
 *   insn=0x000000000047DED8 string=0x00000000001F9770 "0'"
 *   insn=0x000000000047DEE8 string=0x000000000047DEEC "?"
 *   insn=0x000000000047DEEC string=0x000000000047DEF0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FWShell::TouchEnded(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v2; // x10
  _QWORD *v3; // x8
  unsigned __int64 v4; // x11
  _QWORD *v5; // x9
  unsigned __int64 v6; // x12
  bool v7; // cf
  _QWORD *v8; // x12

  v2 = *(_QWORD **)(a1 + 88);
  v3 = (_QWORD *)(a1 + 80);
  if ( !v2 )
    return 0;
  v4 = *a2;
  v5 = (_QWORD *)(a1 + 80);
  do
  {
    v6 = v2[4];
    v7 = v6 >= v4;
    if ( v6 >= v4 )
      v8 = v2 + 2;
    else
      v8 = v2 + 3;
    if ( v7 )
      v5 = v2;
    v2 = (_QWORD *)*v8;
  }
  while ( *v8 );
  if ( v5 == v3 )
    return 0;
  if ( *a2 < v5[4] )
    v5 = (_QWORD *)(a1 + 80);
  if ( v5 == v3 )
    return 0;
  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::erase();
  return 1;
}

