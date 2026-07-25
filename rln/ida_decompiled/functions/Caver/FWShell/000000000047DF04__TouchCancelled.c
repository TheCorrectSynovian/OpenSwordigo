/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047DF04
 * Mangled: _ZN5Caver7FWShell14TouchCancelledERKNS_7FWTouchE
 * Demangled: Caver::FWShell::TouchCancelled(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x00000000001F6990  Caver::FWShell::TouchCancelled(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000001F9770  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::erase(Caver::FWTouch const&)
 *
 * Referenced strings: 18
 *   insn=0x000000000047DF04 string=0x000000000047DF08 "@"
 *   insn=0x000000000047DF08 string=0x000000000047DF0C "J"
 *   insn=0x000000000047DF0C string=0x000000000047DF10 "+"
 *   insn=0x000000000047DF14 string=0x000000000047DF18 "L"
 *   insn=0x000000000047DF18 string=0x000000000047DF1C "Ma"
 *   insn=0x000000000047DF1C string=0x000000000047DF20 "NA"
 *   insn=0x000000000047DF28 string=0x000000000047DF2C ")1"
 *   insn=0x000000000047DF30 string=0x000000000047DF34 "*"
 *   insn=0x000000000047DF34 string=0x000000000047DF38 "?"
 *   insn=0x000000000047DF38 string=0x000000000047DF3C " "
 *   insn=0x000000000047DF3C string=0x000000000047DF40 "*"
 *   insn=0x000000000047DF40 string=0x000000000047DF44 "+"
 *   insn=0x000000000047DF44 string=0x000000000047DF48 "_"
 *   insn=0x000000000047DF48 string=0x000000000047DF4C "\t1"
 *   insn=0x000000000047DF4C string=0x000000000047DF50 "?"
 *   insn=0x000000000047DF64 string=0x00000000001F9770 "0'"
 *   insn=0x000000000047DF74 string=0x000000000047DF78 "?"
 *   insn=0x000000000047DF78 string=0x000000000047DF7C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FWShell::TouchCancelled(__int64 a1, unsigned __int64 *a2)
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

