/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000494F3C
 * Mangled: _ZN5Caver13GUIBubbleViewD2Ev
 * Demangled: Caver::GUIBubbleView::~GUIBubbleView()
 *
 * Callers: 2
 *   0x00000000001F5750  Caver::GUIBubbleView::~GUIBubbleView()
 *   0x0000000000494670  Caver::GUIBubbleView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 6
 *   0x00000000001F5750  Caver::GUIBubbleView::~GUIBubbleView()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004950A4  Caver::GUIButton::GUIButton(Caver::GUIButtonType)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x0000000000494F50 string=0x0000000000494F54 "t"
 *   insn=0x0000000000494F54 string=0x0000000000494F58 "e@"
 *   insn=0x0000000000494F58 string=0x0000000000494F5C "A"
 *   insn=0x0000000000494F5C string=0x0000000000494F60 "h"
 *   insn=0x0000000000494F60 string=0x0000000000494F64 "4"
 *   insn=0x0000000000494F64 string=0x0000000000494FA8 "t~@"
 *   insn=0x0000000000494F68 string=0x0000000000494F6C ""
 *   insn=0x0000000000494F78 string=0x0000000000494F7C "\t@"
 *   insn=0x0000000000494F88 string=0x0000000000494F8C ""
 *   insn=0x0000000000494F98 string=0x0000000000494F9C "@"
 *   insn=0x0000000000494FA8 string=0x0000000000494FAC "4"
 *   insn=0x0000000000494FB0 string=0x0000000000494FB4 ""
 *   insn=0x0000000000494FC0 string=0x0000000000494FC4 "\t@"
 *   insn=0x0000000000494FD0 string=0x0000000000494FD4 ""
 *   insn=0x0000000000494FE0 string=0x0000000000494FE4 "@"
 *   insn=0x0000000000495010 string=0x0000000000495014 "5"
 *   insn=0x0000000000495018 string=0x000000000049501C ""
 *   insn=0x0000000000495028 string=0x000000000049502C "\t@"
 *   insn=0x0000000000495038 string=0x000000000049503C ""
 *   insn=0x0000000000495048 string=0x000000000049504C "@"
 *   insn=0x0000000000495058 string=0x000000000049505C "u"
 *   insn=0x000000000049507C string=0x00000000001F5750 "P'"
 *   insn=0x000000000049508C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000049509C string=0x00000000004950A0 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIBubbleView::~GUIBubbleView(Caver::GUIBubbleView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 34);
  *(_QWORD *)this = off_6D57D0;
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v5 = (_QWORD *)*((_QWORD *)this + 31);
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  Caver::GUIView::~GUIView(this);
}

