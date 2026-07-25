/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A4884
 * Mangled: _ZN5Caver9GUIWindow10MouseMovedERKNS_7Vector2ES3_jd
 * Demangled: Caver::GUIWindow::MouseMoved(Caver::Vector2 const&,Caver::Vector2 const&,uint,double)
 *
 * Callers: 1
 *   0x00000000001F9760  Caver::GUIWindow::MouseMoved(Caver::Vector2 const&,Caver::Vector2 const&,uint,double)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9760  Caver::GUIWindow::MouseMoved(Caver::Vector2 const&,Caver::Vector2 const&,uint,double)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 30
 *   insn=0x00000000004A4898 string=0x00000000004A489C "V"
 *   insn=0x00000000004A48B0 string=0x00000000004A48B4 ""
 *   insn=0x00000000004A48B4 string=0x00000000004A48B8 ""
 *   insn=0x00000000004A48BC string=0x00000000004A48C0 "\tu@"
 *   insn=0x00000000004A48C4 string=0x00000000004A48C8 " "
 *   insn=0x00000000004A48D0 string=0x00000000004A48D4 ""
 *   insn=0x00000000004A48D8 string=0x00000000004A48DC "\t"
 *   insn=0x00000000004A48E0 string=0x00000000004A48E4 ""
 *   insn=0x00000000004A48EC string=0x00000000004A48F0 "i"
 *   insn=0x00000000004A490C string=0x00000000004A4910 "3"
 *   insn=0x00000000004A4910 string=0x00000000004A4914 "h"
 *   insn=0x00000000004A4914 string=0x00000000004A4918 ""
 *   insn=0x00000000004A4918 string=0x00000000004A491C "h"
 *   insn=0x00000000004A4920 string=0x00000000004A4924 "h"
 *   insn=0x00000000004A4928 string=0x00000000004A492C "\t@"
 *   insn=0x00000000004A4930 string=0x00000000004A4934 "h\n@"
 *   insn=0x00000000004A4934 string=0x00000000004A4938 ""
 *   insn=0x00000000004A4938 string=0x00000000004A493C "h\n"
 *   insn=0x00000000004A4940 string=0x00000000004A4944 "h"
 *   insn=0x00000000004A4948 string=0x00000000004A494C "@"
 *   insn=0x00000000004A4960 string=0x00000000004A497C "UF"
 *   insn=0x00000000004A497C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A4984 string=0x00000000004A4988 "4"
 *   insn=0x00000000004A498C string=0x00000000004A4990 ""
 *   insn=0x00000000004A499C string=0x00000000004A49A0 "\t@"
 *   insn=0x00000000004A49AC string=0x00000000004A49B0 ""
 *   insn=0x00000000004A49BC string=0x00000000004A49C0 "@"
 *   insn=0x00000000004A49D0 string=0x00000000004A49D4 "^"
 *   insn=0x00000000004A49D8 string=0x00000000004A49DC "aS"
 *   insn=0x00000000004A49DC string=0x00000000001F9760 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIWindow::MouseMoved(
        Caver::GUIWindow *this,
        const Caver::Vector2 *a2,
        const Caver::Vector2 *a3,
        unsigned int a4,
        double a5)
{
  __int64 result; // x0
  __int64 (__fastcall *v10)(__int64, double *); // x8
  __int64 v11; // x9
  _QWORD *v12; // x19
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // [xsp+0h] [xbp-70h] BYREF
  _QWORD *v16; // [xsp+8h] [xbp-68h]
  double v17; // [xsp+10h] [xbp-60h] BYREF
  unsigned int v18; // [xsp+18h] [xbp-58h]
  int v19; // [xsp+1Ch] [xbp-54h]
  __int64 v20; // [xsp+20h] [xbp-50h]
  __int64 v21; // [xsp+28h] [xbp-48h]
  int v22; // [xsp+30h] [xbp-40h]
  __int64 v23; // [xsp+38h] [xbp-38h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  (*(void (__fastcall **)(__int64 *__return_ptr, Caver::GUIWindow *, const Caver::Vector2 *))(*(_QWORD *)this + 232LL))(
    &v15,
    this,
    a3);
  result = v15;
  if ( v15 )
  {
    v10 = *(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v15 + 32LL);
    v17 = (double)a4;
    v18 = (unsigned int)a5;
    v19 = 1;
    v20 = *(_QWORD *)a3;
    v11 = *(_QWORD *)a2;
    v22 = 0;
    v21 = v11;
    result = v10(v15, &v17);
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

