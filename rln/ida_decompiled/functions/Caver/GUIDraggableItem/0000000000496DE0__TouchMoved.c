/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000496DE0
 * Mangled: _ZN5Caver16GUIDraggableItem10TouchMovedERKNS_7FWTouchE
 * Demangled: Caver::GUIDraggableItem::TouchMoved(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F5220  Caver::GUIView::BringSubviewToFront(Caver::GUIView*)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FDA40  Caver::GUIView::ConvertPointToView(Caver::Vector2 const&,Caver::GUIView*)
 *   0x0000000000200140  Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 57
 *   insn=0x0000000000496DF0 string=0x0000000000496DF4 "U"
 *   insn=0x0000000000496E08 string=0x0000000000496E0C "`.@"
 *   insn=0x0000000000496E10 string=0x0000000000496E14 "a.@"
 *   insn=0x0000000000496E10 string=0x00000000001F5220 "P'"
 *   insn=0x0000000000496E20 string=0x0000000000496E24 "`BH"
 *   insn=0x0000000000496E28 string=0x0000000000496E2C "h"
 *   insn=0x0000000000496E44 string=0x0000000000496E48 "t.@"
 *   insn=0x0000000000496E44 string=0x00000000001FB170 "0'"
 *   insn=0x0000000000496E50 string=0x0000000000496E54 "`"
 *   insn=0x0000000000496E54 string=0x0000000000496E58 "aBH"
 *   insn=0x0000000000496E64 string=0x0000000000496E68 " "
 *   insn=0x0000000000496E80 string=0x00000000001FDA40 "0'"
 *   insn=0x0000000000496E94 string=0x0000000000496E98 "`z@"
 *   insn=0x0000000000496EA4 string=0x0000000000496EA8 ""
 *   insn=0x0000000000496EA8 string=0x0000000000496EAC "U@"
 *   insn=0x0000000000496EC0 string=0x0000000000496EC4 "*"
 *   insn=0x0000000000496EC0 string=0x0000000000496ED0 "t~@"
 *   insn=0x0000000000496EC4 string=0x0000000000496EC8 "J"
 *   insn=0x0000000000496EC8 string=0x0000000000496ECC "*"
 *   insn=0x0000000000496ED0 string=0x0000000000496ED4 "h&"
 *   insn=0x0000000000496ED4 string=0x0000000000496ED8 "4"
 *   insn=0x0000000000496ED8 string=0x0000000000496F1C "`z@"
 *   insn=0x0000000000496EDC string=0x0000000000496EE0 ""
 *   insn=0x0000000000496EEC string=0x0000000000496EF0 "\t@"
 *   insn=0x0000000000496EFC string=0x0000000000496F00 ""
 *   insn=0x0000000000496F0C string=0x0000000000496F10 "@"
 *   insn=0x0000000000496F20 string=0x0000000000496F24 ""
 *   insn=0x0000000000496F24 string=0x0000000000496F28 "Q@"
 *   insn=0x0000000000496F34 string=0x0000000000496F38 "3"
 *   insn=0x0000000000496F38 string=0x0000000000496F3C "h"
 *   insn=0x0000000000496F3C string=0x0000000000496F40 ""
 *   insn=0x0000000000496F40 string=0x0000000000496F44 "h"
 *   insn=0x0000000000496F48 string=0x0000000000496F4C "h"
 *   insn=0x0000000000496F50 string=0x0000000000496F54 "\t@"
 *   insn=0x0000000000496F58 string=0x0000000000496F5C "h\n@"
 *   insn=0x0000000000496F5C string=0x0000000000496F60 ""
 *   insn=0x0000000000496F60 string=0x0000000000496F64 "h\n"
 *   insn=0x0000000000496F68 string=0x0000000000496F6C "h"
 *   insn=0x0000000000496F70 string=0x0000000000496F74 "@"
 *   insn=0x0000000000496FA0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000496FA8 string=0x0000000000496FAC "4"
 *   insn=0x0000000000496FB0 string=0x0000000000496FB4 ""
 *   insn=0x0000000000496FC0 string=0x0000000000496FC4 "\t@"
 *   insn=0x0000000000496FD0 string=0x0000000000496FD4 ""
 *   insn=0x0000000000496FE0 string=0x0000000000496FE4 "@"
 *   insn=0x0000000000496FF0 string=0x0000000000496FF4 "4"
 *   insn=0x0000000000497008 string=0x000000000049700C "T"
 *   insn=0x000000000049701C string=0x0000000000497020 "i.@"
 *   insn=0x0000000000497028 string=0x000000000049702C "E"
 *   insn=0x000000000049702C string=0x0000000000497030 "`BH"
 *   insn=0x0000000000497034 string=0x0000000000497038 "h"
 *   insn=0x000000000049704C string=0x0000000000497050 "H"
 *   insn=0x0000000000497050 string=0x0000000000497054 "`z@"
 *   insn=0x0000000000497058 string=0x000000000049705C ""
 *   insn=0x0000000000497058 string=0x000000000049706C "h"
 *   insn=0x0000000000497060 string=0x0000000000497064 "Y@"
 *   insn=0x0000000000497070 string=0x0000000000497074 "=@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIDraggableItem::TouchMoved(Caver::GUIDraggableItem *this, const Caver::FWTouch *a2)
{
  _QWORD *v4; // x8
  __int64 result; // x0
  __int64 v6; // x20
  void (__fastcall *v7)(unsigned __int64 *__return_ptr, __int64, float32x2_t *); // x22
  Caver::GUIView *v8; // x2
  unsigned __int64 v9; // x8
  _QWORD *v10; // x9
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x8
  unsigned __int64 v17; // [xsp+48h] [xbp-48h] BYREF
  float32x2_t v18; // [xsp+50h] [xbp-40h] BYREF
  unsigned __int64 v19; // [xsp+58h] [xbp-38h] BYREF
  _QWORD *v20; // [xsp+60h] [xbp-30h]
  __int64 v21; // [xsp+68h] [xbp-28h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::BringSubviewToFront(*((Caver::GUIView **)this + 11), this);
  Caver::FWTouch::LocationInView((__int64 *)&v18, a2, *((const Caver::GUIView **)this + 11));
  v4 = *(_QWORD **)((char *)this + 140);
  v19 = vadd_f32(*(float32x2_t *)((char *)this + 132), v18).n64_u64[0];
  v20 = v4;
  result = Caver::GUIView::SetFrame(this, (const Caver::Rectangle *)&v19);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
  {
    v7 = *(void (__fastcall **)(unsigned __int64 *__return_ptr, __int64, float32x2_t *))(*(_QWORD *)v6 + 232LL);
    v8 = (Caver::GUIView *)*((_QWORD *)this + 11);
    v17 = vadd_f32(
            *(float32x2_t *)((char *)this + 132),
            vmul_f32(*(float32x2_t *)((char *)this + 140), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
    Caver::GUIView::ConvertPointToView((__int64 *)&v18, this, (const Caver::Vector2 *)&v17, v8);
    v7(&v19, v6, &v18);
    v9 = v19;
    result = *((_QWORD *)this + 30);
    if ( v19 != result )
    {
      if ( result )
      {
        (*(void (__fastcall **)(__int64, Caver::GUIDraggableItem *))(*(_QWORD *)result + 168LL))(result, this);
        v9 = v19;
      }
      v10 = v20;
      if ( v20 )
        ++v20[1];
      v11 = (_QWORD *)*((_QWORD *)this + 31);
      *((_QWORD *)this + 30) = v9;
      *((_QWORD *)this + 31) = v10;
      if ( v11 )
      {
        v12 = v11[1] - 1LL;
        v11[1] = v12;
        if ( !v12 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
          v13 = v11[2] - 1LL;
          v11[2] = v13;
          if ( !v13 )
            (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
        }
      }
      result = *((_QWORD *)this + 30);
      if ( result )
        result = (*(__int64 (__fastcall **)(__int64, Caver::GUIDraggableItem *))(*(_QWORD *)result + 160LL))(
                   result,
                   this);
    }
    v14 = v20;
    if ( v20 )
    {
      v15 = v20[1] - 1LL;
      v20[1] = v15;
      if ( !v15 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
        v16 = v14[2] - 1LL;
        v14[2] = v16;
        if ( !v16 )
          return (*(__int64 (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
      }
    }
  }
  return result;
}

