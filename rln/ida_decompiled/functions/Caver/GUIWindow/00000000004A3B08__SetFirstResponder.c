/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A3B08
 * Mangled: _ZN5Caver9GUIWindow17SetFirstResponderERKN5boost10shared_ptrINS_7GUIViewEEE
 * Demangled: Caver::GUIWindow::SetFirstResponder(boost::shared_ptr<Caver::GUIView> const&)
 *
 * Callers: 1
 *   0x00000000001F58B0  Caver::GUIWindow::SetFirstResponder(boost::shared_ptr<Caver::GUIView> const&)
 *
 * Callees: 5
 *   0x00000000001F5D20  std::_Rb_tree<uint,uint,std::_Identity<uint>,std::less<uint>,std::allocator<uint>>::_M_erase(std::_Rb_tree_node<uint> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 59
 *   insn=0x00000000004A3B20 string=0x00000000004A3B24 "W"
 *   insn=0x00000000004A3B34 string=0x00000000004A3B38 "v"
 *   insn=0x00000000004A3B3C string=0x00000000004A3BDC "t"
 *   insn=0x00000000004A3B48 string=0x00000000004A3B4C "t"
 *   insn=0x00000000004A3B4C string=0x00000000004A3B50 "x"
 *   insn=0x00000000004A3B54 string=0x00000000004A3B58 "`"
 *   insn=0x00000000004A3B58 string=0x00000000004A3BC4 "a"
 *   insn=0x00000000004A3B60 string=0x00000000004A3B64 "("
 *   insn=0x00000000004A3B68 string=0x00000000004A3B6C ""
 *   insn=0x00000000004A3B80 string=0x00000000004A3B84 "\t"
 *   insn=0x00000000004A3B90 string=0x00000000004A3B94 ""
 *   insn=0x00000000004A3B94 string=0x00000000004A3B98 ""
 *   insn=0x00000000004A3BB8 string=0x00000000004A3BBC "a"
 *   insn=0x00000000004A3BBC string=0x00000000004A3B88 "`"
 *   insn=0x00000000004A3BC4 string=0x00000000004A3BC8 "`"
 *   insn=0x00000000004A3BC8 string=0x00000000004A3BCC "UH"
 *   insn=0x00000000004A3BCC string=0x00000000004A3BD0 "v"
 *   insn=0x00000000004A3BCC string=0x00000000001F5D20 "P'"
 *   insn=0x00000000004A3BD4 string=0x00000000004A3BD8 "t~"
 *   insn=0x00000000004A3BE4 string=0x00000000004A3BE8 ""
 *   insn=0x00000000004A3BF4 string=0x00000000004A3BF8 "\n"
 *   insn=0x00000000004A3BF4 string=0x00000000004A3C04 "i""
 *   insn=0x00000000004A3BF8 string=0x00000000004A3BFC "J"
 *   insn=0x00000000004A3BFC string=0x00000000004A3C00 "\n"
 *   insn=0x00000000004A3C04 string=0x00000000004A3C08 "4"
 *   insn=0x00000000004A3C0C string=0x00000000004A3C10 ""
 *   insn=0x00000000004A3C1C string=0x00000000004A3C20 "\t@"
 *   insn=0x00000000004A3C2C string=0x00000000004A3C30 ""
 *   insn=0x00000000004A3C3C string=0x00000000004A3C40 "@"
 *   insn=0x00000000004A3C4C string=0x00000000004A3C50 "h"
 *   insn=0x00000000004A3C4C string=0x00000000004A3C6C "4"
 *   insn=0x00000000004A3C5C string=0x00000000004A3C60 "i@"
 *   insn=0x00000000004A3C70 string=0x00000000004A3C74 ""
 *   insn=0x00000000004A3C84 string=0x00000000004A3C88 "\t@"
 *   insn=0x00000000004A3C90 string=0x00000000004A3C94 ""
 *   insn=0x00000000004A3CA4 string=0x00000000004A3CA8 "@"
 *   insn=0x00000000004A3CBC string=0x00000000004A3CDC "}I"
 *   insn=0x00000000004A3CDC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A3CE8 string=0x00000000004A3CEC "4"
 *   insn=0x00000000004A3CF0 string=0x00000000004A3CF4 ""
 *   insn=0x00000000004A3D00 string=0x00000000004A3D04 "\t@"
 *   insn=0x00000000004A3D10 string=0x00000000004A3D14 ""
 *   insn=0x00000000004A3D20 string=0x00000000004A3D24 "@"
 *   insn=0x00000000004A3D50 string=0x00000000004A3D54 "U"
 *   insn=0x00000000004A3D60 string=0x00000000004A3D64 "`"
 *   insn=0x00000000004A3D68 string=0x00000000004A3D6C "t"
 *   insn=0x00000000004A3D68 string=0x00000000004A3DC8 "v"
 *   insn=0x00000000004A3D6C string=0x00000000004A3D70 "v"
 *   insn=0x00000000004A3D78 string=0x00000000004A3DCC "a"
 *   insn=0x00000000004A3D7C string=0x00000000004A3D80 ""
 *   insn=0x00000000004A3D80 string=0x00000000004A3D84 "("
 *   insn=0x00000000004A3D8C string=0x00000000004A3D90 ""
 *   insn=0x00000000004A3D94 string=0x00000000004A3D98 ""
 *   insn=0x00000000004A3DB0 string=0x00000000004A3DB4 ";"
 *   insn=0x00000000004A3DBC string=0x00000000004A3DC0 "a"
 *   insn=0x00000000004A3DC0 string=0x00000000004A3D8C "`"
 *   insn=0x00000000004A3DCC string=0x00000000004A3DD0 "`"
 *   insn=0x00000000004A3DD8 string=0x00000000004A3DDC "v~"
 *   insn=0x00000000004A3DEC string=0x00000000004A3E08 "2I"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIWindow::SetFirstResponder(__int64 result, __int64 *a2)
{
  _QWORD *v2; // x19
  __int64 v4; // x22
  __int64 v5; // x20
  __int64 v6; // x24
  int v7; // w9
  void (__fastcall *v8)(__int64, __int64 *); // x8
  __int64 v9; // x0
  int v10; // w9
  void (__fastcall *v11)(__int64, __int64 *); // x8
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x9
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // [xsp+60h] [xbp-60h] BYREF
  __int64 v20; // [xsp+68h] [xbp-58h]
  int v21; // [xsp+70h] [xbp-50h]
  __int64 v22; // [xsp+78h] [xbp-48h]

  v2 = (_QWORD *)result;
  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD *)(result + 272);
  if ( v4 && *a2 != v4 )
  {
    v5 = *(_QWORD *)(result + 312);
    v6 = result + 296;
    if ( v5 != result + 296 )
    {
      v7 = *(_DWORD *)(v5 + 32);
      v8 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 40LL);
      v19 = 0;
      v20 = 0x200000000LL;
      v21 = v7;
      v8(v4, &v19);
      while ( 1 )
      {
        v5 = sub_54C6A0(v5);
        if ( v5 == v6 )
          break;
        v9 = v2[34];
        v10 = *(_DWORD *)(v5 + 32);
        v11 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 40LL);
        v19 = 0;
        v20 = 0x200000000LL;
        v21 = v10;
        v11(v9, &v19);
      }
      v5 = (__int64)(v2 + 37);
    }
    result = std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::_M_erase();
    v4 = v2[34];
    v2[38] = 0;
    v2[39] = v5;
    v2[40] = v5;
    v2[41] = 0;
  }
  v12 = (_QWORD *)v2[35];
  if ( v12 )
    ++v12[1];
  v14 = *a2;
  v13 = a2[1];
  if ( v13 )
    ++*(_QWORD *)(v13 + 8);
  v2[34] = v14;
  v2[35] = v13;
  if ( v12 )
  {
    v15 = v12[1] - 1LL;
    v12[1] = v15;
    if ( !v15 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v16 = v12[2] - 1LL;
      v12[2] = v16;
      if ( !v16 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  if ( v4 && v4 != v2[34] )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4);
  if ( v12 )
  {
    v17 = v12[1] - 1LL;
    v12[1] = v17;
    if ( !v17 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v18 = v12[2] - 1LL;
      v12[2] = v18;
      if ( !v18 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  return result;
}

