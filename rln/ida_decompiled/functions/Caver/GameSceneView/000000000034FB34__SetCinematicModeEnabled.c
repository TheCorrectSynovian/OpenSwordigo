/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034FB34
 * Mangled: _ZN5Caver13GameSceneView23SetCinematicModeEnabledEbbb
 * Demangled: Caver::GameSceneView::SetCinematicModeEnabled(bool,bool,bool)
 *
 * Callers: 1
 *   0x00000000001FC2C0  Caver::GameSceneView::SetCinematicModeEnabled(bool,bool,bool)
 *
 * Callees: 12
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F71C0  Caver::GameOverlayView::CancelInput(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC500  Caver::GUIEffect::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FDB50  Caver::GUIEffect::GUIEffect(void)
 *   0x00000000001FDEA0  Caver::GUIEffect::HideBars(float)
 *   0x00000000001FFB30  boost::detail::shared_count::shared_count<Caver::GUIEffect>(Caver::GUIEffect *)
 *   0x0000000000202540  Caver::GUIEffect::ShowBars(float)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000034FCCC  Caver::GUIPropertyValue::ValueWithFloat(float)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x000000000034FB44 string=0x000000000034FB48 "V"
 *   insn=0x000000000034FB54 string=0x000000000034FB58 ")"
 *   insn=0x000000000034FB58 string=0x000000000034FB5C "j"
 *   insn=0x000000000034FB74 string=0x00000000001F71C0 "0'"
 *   insn=0x000000000034FB7C string=0x000000000034FB80 "\t"
 *   insn=0x000000000034FB84 string=0x000000000034FB88 " "
 *   insn=0x000000000034FB90 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000034FB98 string=0x00000000001FDB50 "0'"
 *   insn=0x000000000034FBB8 string=0x000000000034FBBC "e"
 *   insn=0x000000000034FBD4 string=0x000000000034FBD8 "5"
 *   insn=0x000000000034FBDC string=0x000000000034FBE0 ""
 *   insn=0x000000000034FBF0 string=0x000000000034FBF4 "\t@"
 *   insn=0x000000000034FBFC string=0x000000000034FC00 ""
 *   insn=0x000000000034FC10 string=0x000000000034FC14 "@"
 *   insn=0x000000000034FC20 string=0x000000000034FC24 "7"
 *   insn=0x000000000034FC24 string=0x00000000001FC500 "0'"
 *   insn=0x000000000034FC2C string=0x0000000000584430 "333?"
 *   insn=0x000000000034FC3C string=0x000000000034FC40 "@"
 *   insn=0x000000000034FC4C string=0x000000000034FC50 ""
 *   insn=0x000000000034FC54 string=0x000000000034FC58 "\t"
 *   insn=0x000000000034FC58 string=0x000000000034FC5C "=@"
 *   insn=0x000000000034FC8C string=0x00000000001FDEA0 "0'"
 *   insn=0x000000000034FCB4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000034FCBC string=0x000000000034FCC0 "|"
 *   insn=0x000000000034FCC0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GUIEffect *__fastcall Caver::GameSceneView::SetCinematicModeEnabled(
        Caver::GameSceneView *this,
        char a2,
        char a3,
        char a4)
{
  Caver::GUIEffect *v6; // x0
  Caver::GUIEffect *v7; // x21
  _QWORD *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x8
  float v11; // s0
  Caver::GUIEffect *result; // x0
  __int64 *v13; // x0
  __int64 v14; // x8
  __int64 v15; // x8
  float v16; // s0
  Caver::GUIEffect *v17; // [xsp+8h] [xbp-38h]
  __int64 v18; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  *((_BYTE *)this + 384) = a2 & 1;
  *((_BYTE *)this + 320) = a4 & 1;
  if ( (a2 & 1) != 0 )
  {
    Caver::GameOverlayView::CancelInput(*((Caver::GameOverlayView **)this + 32));
    *(_BYTE *)(*((_QWORD *)this + 32) + 228LL) = 1;
    v6 = (Caver::GUIEffect *)*((_QWORD *)this + 49);
    if ( !v6 )
    {
      v7 = (Caver::GUIEffect *)operator new(0x70u);
      Caver::GUIEffect::GUIEffect(v7);
      v17 = v7;
      boost::detail::shared_count::shared_count<Caver::GUIEffect>();
      boost::detail::sp_enable_shared_from_this();
      v8 = (_QWORD *)*((_QWORD *)this + 50);
      *((_QWORD *)this + 49) = v17;
      *((_QWORD *)this + 50) = v18;
      if ( v8 )
      {
        v9 = v8[1] - 1LL;
        v8[1] = v9;
        if ( !v9 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
          v10 = v8[2] - 1LL;
          v8[2] = v10;
          if ( !v10 )
            (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
        }
      }
      Caver::GUIEffect::SetFrame(*((Caver::GUIEffect **)this + 49), (Caver::GameSceneView *)((char *)this + 132));
      v6 = (Caver::GUIEffect *)*((_QWORD *)this + 49);
    }
    v11 = 0.7;
    if ( (a3 & 1) == 0 )
      v11 = 0.0;
    return (Caver::GUIEffect *)Caver::GUIEffect::ShowBars(v6, v11);
  }
  else
  {
    v13 = (__int64 *)*((_QWORD *)this + 41);
    if ( v13 )
    {
      v14 = *v13;
      *((_BYTE *)v13 + 228) = 1;
      (*(void (**)(void))(v14 + 120))();
    }
    v15 = *((_QWORD *)this + 32);
    *((_BYTE *)this + 344) = 0;
    *(_BYTE *)(v15 + 228) = 0;
    result = (Caver::GUIEffect *)*((_QWORD *)this + 49);
    if ( result )
    {
      v16 = 0.7;
      if ( (a3 & 1) == 0 )
        v16 = 0.0;
      return (Caver::GUIEffect *)Caver::GUIEffect::HideBars(result, v16);
    }
  }
  return result;
}

