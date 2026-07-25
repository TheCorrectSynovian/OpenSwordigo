/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A4CE8
 * Mangled: _ZN5Caver9GUIWindow5KeyUpEjjd
 * Demangled: Caver::GUIWindow::KeyUp(uint,uint,double)
 *
 * Callers: 1
 *   0x00000000001FA510  Caver::GUIWindow::KeyUp(uint,uint,double)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F74E0  std::_Rb_tree<uint,uint,std::_Identity<uint>,std::less<uint>,std::allocator<uint>>::erase(uint const&)
 *
 * Referenced strings: 24
 *   insn=0x00000000004A4CFC string=0x00000000004A4D00 "U"
 *   insn=0x00000000004A4D08 string=0x00000000004A4D0C ""
 *   insn=0x00000000004A4D1C string=0x00000000004A4D20 "("
 *   insn=0x00000000004A4D2C string=0x00000000004A4D30 "*"
 *   insn=0x00000000004A4D30 string=0x00000000004A4D34 "K!@"
 *   insn=0x00000000004A4D30 string=0x00000000004A4D54 "?"
 *   insn=0x00000000004A4D34 string=0x00000000004A4D38 "La"
 *   insn=0x00000000004A4D38 string=0x00000000004A4D3C "MA"
 *   insn=0x00000000004A4D44 string=0x00000000004A4D48 ")1"
 *   insn=0x00000000004A4D48 string=0x00000000004A4D4C "j"
 *   insn=0x00000000004A4D4C string=0x00000000004A4D50 "*"
 *   insn=0x00000000004A4D54 string=0x00000000004A4D58 "`"
 *   insn=0x00000000004A4D58 string=0x00000000004A4D5C "*!@"
 *   insn=0x00000000004A4D5C string=0x00000000004A4D60 "_"
 *   insn=0x00000000004A4D60 string=0x00000000004A4D64 "\t"
 *   insn=0x00000000004A4D64 string=0x00000000004A4D68 "?"
 *   insn=0x00000000004A4D78 string=0x00000000001F74E0 "0'"
 *   insn=0x00000000004A4D88 string=0x00000000004A4D8C ""
 *   insn=0x00000000004A4D8C string=0x00000000004A4D90 ""
 *   insn=0x00000000004A4DAC string=0x00000000004A4DB0 " "
 *   insn=0x00000000004A4DC4 string=0x00000000004A4DC8 ""
 *   insn=0x00000000004A4DC8 string=0x00000000004A4DCC ""
 *   insn=0x00000000004A4DE0 string=0x00000000004A4DFC "5E"
 *   insn=0x00000000004A4DFC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::GUIWindow::KeyUp(_QWORD *this, unsigned int a2, unsigned int a3, long double a4)
{
  _QWORD *v4; // x20
  __int64 v7; // x10
  _QWORD *v8; // x8
  _QWORD *v9; // x9
  unsigned int v10; // w11
  bool v11; // cf
  __int64 *v12; // x11
  __int64 v13; // x0
  __int64 (__fastcall *v14)(__int64, __int64 *); // x8
  __int64 v16; // [xsp+10h] [xbp-40h] BYREF
  unsigned int v17; // [xsp+18h] [xbp-38h]
  int v18; // [xsp+1Ch] [xbp-34h]
  unsigned int v19; // [xsp+20h] [xbp-30h]
  __int64 v20; // [xsp+28h] [xbp-28h]

  v4 = this;
  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( this[34] )
  {
    v7 = this[38];
    v8 = this + 37;
    v9 = this + 37;
    if ( v7 )
    {
      do
      {
        v10 = *(_DWORD *)(v7 + 32);
        v11 = v10 >= a2;
        if ( v10 >= a2 )
          v12 = (__int64 *)(v7 + 16);
        else
          v12 = (__int64 *)(v7 + 24);
        if ( v11 )
          v9 = (_QWORD *)v7;
        v7 = *v12;
      }
      while ( *v12 );
    }
    if ( v9 != v8 )
    {
      if ( *((_DWORD *)v9 + 8) > a2 )
        v9 = this + 37;
      if ( v9 != v8 )
      {
        std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::erase();
        v13 = v4[34];
        v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 40LL);
        v16 = *(_QWORD *)&a4;
        v17 = a3;
        v18 = 2;
        v19 = a2;
        this = (_QWORD *)v14(v13, &v16);
      }
    }
  }
  if ( (_QWORD *)v4[56] != v4 + 56 )
    return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, long double))(**(_QWORD **)(v4[57] + 16LL)
                                                                                    + 344LL))(
                       *(_QWORD *)(v4[57] + 16LL),
                       a2,
                       a3,
                       a4);
  return this;
}

