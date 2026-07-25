/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000035037C
 * Mangled: _ZN5Caver13GameSceneView15ToggleDebugInfoEv
 * Demangled: Caver::GameSceneView::ToggleDebugInfo(void)
 *
 * Callers: 1
 *   0x00000000002020D0  Caver::GameSceneView::ToggleDebugInfo(void)
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FE6A0  Caver::DebugInfoOverlay::DebugInfoOverlay(void)
 *   0x00000000001FFDD0  Caver::DebugInfoOverlay::Toggle(void)
 *   0x0000000000202190  boost::shared_ptr<Caver::DebugInfoOverlay>::shared_ptr<Caver::DebugInfoOverlay>(Caver::DebugInfoOverlay *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003505A8  Caver::GameSceneView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 50
 *   insn=0x000000000035038C string=0x0000000000350390 "U"
 *   insn=0x000000000035039C string=0x00000000003503A0 "`"
 *   insn=0x00000000003503A0 string=0x00000000003503A4 "@"
 *   insn=0x00000000003503A4 string=0x00000000003504AC "dA"
 *   insn=0x00000000003503AC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003503BC string=0x00000000003503C0 "t"
 *   insn=0x00000000003503C0 string=0x00000000003503C4 "hRQ"
 *   insn=0x00000000003503D0 string=0x00000000003503D4 "i""
 *   insn=0x00000000003503D8 string=0x00000000003503DC "4"
 *   insn=0x00000000003503DC string=0x0000000000350420 "h"
 *   insn=0x00000000003503E0 string=0x00000000003503E4 ""
 *   insn=0x00000000003503F4 string=0x00000000003503F8 "\t@"
 *   insn=0x0000000000350400 string=0x0000000000350404 ""
 *   insn=0x0000000000350414 string=0x0000000000350418 "@"
 *   insn=0x0000000000350420 string=0x0000000000350424 "i"
 *   insn=0x0000000000350424 string=0x0000000000350428 "1@"
 *   insn=0x000000000035042C string=0x0000000000350430 "i"
 *   insn=0x0000000000350438 string=0x000000000035043C "*"
 *   insn=0x000000000035043C string=0x0000000000350440 "J"
 *   insn=0x0000000000350440 string=0x0000000000350444 "*"
 *   insn=0x0000000000350454 string=0x0000000000350458 "4"
 *   insn=0x0000000000350458 string=0x000000000035049C "`"
 *   insn=0x000000000035045C string=0x0000000000350460 ""
 *   insn=0x0000000000350470 string=0x0000000000350474 "\t@"
 *   insn=0x000000000035047C string=0x0000000000350480 ""
 *   insn=0x0000000000350490 string=0x0000000000350494 "@"
 *   insn=0x000000000035049C string=0x00000000003504A0 "a"
 *   insn=0x00000000003504A0 string=0x00000000003504A4 "3"
 *   insn=0x00000000003504A4 string=0x00000000003504A8 "`"
 *   insn=0x00000000003504A4 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003504B4 string=0x00000000003504B8 ""
 *   insn=0x00000000003504B4 string=0x0000000000350514 "/"
 *   insn=0x00000000003504B8 string=0x00000000003504BC "=@"
 *   insn=0x00000000003504C0 string=0x00000000003504C4 "t"
 *   insn=0x00000000003504C8 string=0x00000000003504CC "t"
 *   insn=0x00000000003504D0 string=0x00000000003504D4 ""
 *   insn=0x00000000003504E4 string=0x00000000003504E8 "\t@"
 *   insn=0x00000000003504F0 string=0x00000000003504F4 ""
 *   insn=0x0000000000350504 string=0x0000000000350508 "@"
 *   insn=0x0000000000350524 string=0x000000000035053C "e"
 *   insn=0x000000000035053C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000035054C string=0x0000000000350550 ""
 *   insn=0x0000000000350554 string=0x0000000000350558 "A"
 *   insn=0x000000000035055C string=0x0000000000350560 "\t@"
 *   insn=0x000000000035056C string=0x0000000000350570 ""
 *   insn=0x0000000000350574 string=0x0000000000350578 "A"
 *   insn=0x000000000035057C string=0x0000000000350580 "@"
 *   insn=0x0000000000350598 string=0x000000000035059C "E"
 *   insn=0x000000000035059C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003505A4 string=0x00000000003505A8 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameSceneView::ToggleDebugInfo(Caver::GameSceneView *this)
{
  Caver::DebugInfoOverlay *v2; // x0
  Caver::DebugInfoOverlay *v3; // x0
  _QWORD *v4; // x20
  __int64 v5; // x9
  _QWORD *v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  void (__fastcall *v9)(Caver::GameSceneView *, __int64 *); // x8
  _QWORD *v10; // x9
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 result; // x0
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // [xsp+8h] [xbp-38h] BYREF
  _QWORD *v19; // [xsp+10h] [xbp-30h]
  __int64 v20; // [xsp+18h] [xbp-28h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::DebugInfoOverlay *)*((_QWORD *)this + 34);
  if ( !v2 )
  {
    v3 = (Caver::DebugInfoOverlay *)operator new(0x168u);
    Caver::DebugInfoOverlay::DebugInfoOverlay(v3);
    boost::shared_ptr<Caver::DebugInfoOverlay>::shared_ptr<Caver::DebugInfoOverlay>();
    v4 = (_QWORD *)*((_QWORD *)this + 35);
    v5 = v18;
    v18 = *((_QWORD *)this + 34);
    v6 = v19;
    *((_QWORD *)this + 34) = v5;
    *((_QWORD *)this + 35) = v6;
    v19 = v4;
    if ( v4 )
    {
      v7 = v4[1] - 1LL;
      v4[1] = v7;
      if ( !v7 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
        v8 = v4[2] - 1LL;
        v4[2] = v8;
        if ( !v8 )
          (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
      }
    }
    v9 = *(void (__fastcall **)(Caver::GameSceneView *, __int64 *))(*(_QWORD *)this + 96LL);
    v18 = *((_QWORD *)this + 34);
    v10 = (_QWORD *)*((_QWORD *)this + 35);
    v19 = v10;
    if ( v10 )
      ++v10[1];
    v9(this, &v18);
    v11 = v19;
    if ( v19 )
    {
      v12 = v19[1] - 1LL;
      v19[1] = v12;
      if ( !v12 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
        v13 = v11[2] - 1LL;
        v11[2] = v13;
        if ( !v13 )
          (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
      }
    }
    Caver::GUIView::SetFrame(*((Caver::GUIView **)this + 34), (Caver::GameSceneView *)((char *)this + 132));
    v2 = (Caver::DebugInfoOverlay *)*((_QWORD *)this + 34);
  }
  if ( *((_DWORD *)v2 + 89) != 1 )
    return Caver::DebugInfoOverlay::Toggle(v2);
  result = (*(__int64 (__fastcall **)(Caver::DebugInfoOverlay *))(*(_QWORD *)v2 + 120LL))(v2);
  v15 = (_QWORD *)*((_QWORD *)this + 35);
  *((_QWORD *)this + 34) = 0;
  *((_QWORD *)this + 35) = 0;
  if ( v15 )
  {
    v16 = v15[1] - 1LL;
    v15[1] = v16;
    if ( !v16 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      v17 = v15[2] - 1LL;
      v15[2] = v17;
      if ( !v17 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
    }
  }
  return result;
}

