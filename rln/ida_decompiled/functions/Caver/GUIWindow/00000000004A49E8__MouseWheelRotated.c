/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A49E8
 * Mangled: _ZN5Caver9GUIWindow17MouseWheelRotatedEfRKNS_7Vector2Ejd
 * Demangled: Caver::GUIWindow::MouseWheelRotated(float,Caver::Vector2 const&,uint,double)
 *
 * Callers: 1
 *   0x0000000000202790  Caver::GUIWindow::MouseWheelRotated(float,Caver::Vector2 const&,uint,double)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202790  Caver::GUIWindow::MouseWheelRotated(float,Caver::Vector2 const&,uint,double)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x00000000004A49FC string=0x00000000004A4A00 "U"
 *   insn=0x00000000004A4A04 string=0x00000000004A4A08 ")"
 *   insn=0x00000000004A4A14 string=0x00000000004A4A18 ""
 *   insn=0x00000000004A4A18 string=0x00000000004A4A1C ""
 *   insn=0x00000000004A4A1C string=0x00000000004A4A20 "\tu@"
 *   insn=0x00000000004A4A24 string=0x00000000004A4A28 " "
 *   insn=0x00000000004A4A34 string=0x00000000004A4A38 "("
 *   insn=0x00000000004A4A44 string=0x00000000004A4A48 "h&@)"
 *   insn=0x00000000004A4A54 string=0x00000000004A4A58 ""
 *   insn=0x00000000004A4A58 string=0x00000000004A4A5C ""
 *   insn=0x00000000004A4A68 string=0x00000000004A4A6C "3"
 *   insn=0x00000000004A4A6C string=0x00000000004A4A70 "h"
 *   insn=0x00000000004A4A70 string=0x00000000004A4A74 ""
 *   insn=0x00000000004A4A74 string=0x00000000004A4A78 "h"
 *   insn=0x00000000004A4A7C string=0x00000000004A4A80 "h"
 *   insn=0x00000000004A4A84 string=0x00000000004A4A88 "\t@"
 *   insn=0x00000000004A4A8C string=0x00000000004A4A90 "h\n@"
 *   insn=0x00000000004A4A90 string=0x00000000004A4A94 ""
 *   insn=0x00000000004A4A94 string=0x00000000004A4A98 "h\n"
 *   insn=0x00000000004A4A9C string=0x00000000004A4AA0 "h"
 *   insn=0x00000000004A4AA4 string=0x00000000004A4AA8 "@"
 *   insn=0x00000000004A4AD8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A4AE0 string=0x00000000004A4AE4 "4"
 *   insn=0x00000000004A4AE8 string=0x00000000004A4AEC ""
 *   insn=0x00000000004A4AF8 string=0x00000000004A4AFC "\t@"
 *   insn=0x00000000004A4B08 string=0x00000000004A4B0C ""
 *   insn=0x00000000004A4B18 string=0x00000000004A4B1C "@"
 *   insn=0x00000000004A4B28 string=0x00000000004A4B2C "fs"
 *   insn=0x00000000004A4B2C string=0x00000000004A4B30 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIWindow::MouseWheelRotated(
        Caver::GUIWindow *this,
        float a2,
        const Caver::Vector2 *a3,
        unsigned int a4,
        double a5)
{
  __int64 result; // x0
  int v10; // w8
  int v11; // w9
  _QWORD *v12; // x19
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // [xsp+0h] [xbp-70h] BYREF
  _QWORD *v16; // [xsp+8h] [xbp-68h]
  double v17; // [xsp+10h] [xbp-60h] BYREF
  unsigned int v18; // [xsp+18h] [xbp-58h]
  int v19; // [xsp+1Ch] [xbp-54h]
  int v20; // [xsp+20h] [xbp-50h]
  int v21; // [xsp+24h] [xbp-4Ch]
  int v22; // [xsp+28h] [xbp-48h]
  int v23; // [xsp+2Ch] [xbp-44h]
  float v24; // [xsp+30h] [xbp-40h]
  __int64 v25; // [xsp+38h] [xbp-38h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  (*(void (__fastcall **)(__int64 *__return_ptr))(*(_QWORD *)this + 232LL))(&v15);
  result = v15;
  if ( v15 )
  {
    v17 = (double)a4;
    v18 = (unsigned int)a5;
    v19 = 4;
    v10 = *(_DWORD *)a3;
    v11 = *((_DWORD *)a3 + 1);
    v24 = a2;
    v20 = v10;
    v21 = v11;
    v22 = v10;
    v23 = v11;
    result = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v15 + 32LL))(v15, &v17);
  }
  v12 = v16;
  if ( v16 )
  {
    v13 = v16[1] - 1LL;
    v16[1] = v13;
    if ( !v13 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v14 = v12[2] - 1LL;
      v12[2] = v14;
      if ( !v14 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  return result;
}

