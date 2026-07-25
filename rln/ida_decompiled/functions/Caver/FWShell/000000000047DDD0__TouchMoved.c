/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047DDD0
 * Mangled: _ZN5Caver7FWShell10TouchMovedERKNS_7FWTouchE
 * Demangled: Caver::FWShell::TouchMoved(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x00000000001FE910  Caver::FWShell::TouchMoved(Caver::FWTouch const&)
 *
 * Callees: 2
 *   0x00000000001F9770  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::erase(Caver::FWTouch const&)
 *   0x00000000001FACF0  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_insert_unique(Caver::FWTouch const&)
 *
 * Referenced strings: 19
 *   insn=0x000000000047DDD8 string=0x000000000047DDDC "\n,@"
 *   insn=0x000000000047DDE0 string=0x000000000047DDE4 "@"
 *   insn=0x000000000047DDE8 string=0x000000000047DDEC "k"
 *   insn=0x000000000047DDF0 string=0x000000000047DDF4 "L"
 *   insn=0x000000000047DDF4 string=0x000000000047DDF8 "Ma"
 *   insn=0x000000000047DDF8 string=0x000000000047DDFC "NA"
 *   insn=0x000000000047DE04 string=0x000000000047DE08 ")1"
 *   insn=0x000000000047DE0C string=0x000000000047DE10 "*"
 *   insn=0x000000000047DE10 string=0x000000000047DE14 "?"
 *   insn=0x000000000047DE18 string=0x000000000047DE2C "j"
 *   insn=0x000000000047DE20 string=0x000000000047DE24 "?"
 *   insn=0x000000000047DE2C string=0x000000000047DE30 "+"
 *   insn=0x000000000047DE30 string=0x000000000047DE34 "_"
 *   insn=0x000000000047DE34 string=0x000000000047DE38 "\t1"
 *   insn=0x000000000047DE38 string=0x000000000047DE3C "?"
 *   insn=0x000000000047DE3C string=0x000000000047DE40 "@"
 *   insn=0x000000000047DE4C string=0x000000000047DE50 "H"
 *   insn=0x000000000047DE50 string=0x00000000001F9770 "0'"
 *   insn=0x000000000047DE5C string=0x00000000001FACF0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FWShell::TouchMoved(Caver::FWShell *this, const Caver::FWTouch *a2)
{
  _QWORD *v2; // x10
  char *v3; // x8
  unsigned __int64 v4; // x11
  char *v5; // x9
  unsigned __int64 v6; // x12
  bool v7; // cf
  _QWORD *v8; // x12

  v2 = (_QWORD *)*((_QWORD *)this + 11);
  v3 = (char *)this + 80;
  if ( !v2 )
    return 0;
  v4 = *(_QWORD *)a2;
  v5 = (char *)this + 80;
  do
  {
    v6 = v2[4];
    v7 = v6 >= v4;
    if ( v6 >= v4 )
      v8 = v2 + 2;
    else
      v8 = v2 + 3;
    if ( v7 )
      v5 = (char *)v2;
    v2 = (_QWORD *)*v8;
  }
  while ( *v8 );
  if ( v5 == v3 )
    return 0;
  if ( *(_QWORD *)a2 < *((_QWORD *)v5 + 4) )
    v5 = (char *)this + 80;
  if ( v5 == v3 )
    return 0;
  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::erase();
  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_insert_unique();
  return 1;
}

