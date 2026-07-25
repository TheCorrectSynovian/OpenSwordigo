/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004977D4
 * Mangled: _ZN5Caver8GUILabelC2Ev
 * Demangled: Caver::GUILabel::GUILabel(void)
 *
 * Callers: 2
 *   0x00000000001F53C0  Caver::GUILabel::GUILabel(void)
 *   0x000000000049779C  Caver::GUIFrameView::~GUIFrameView()
 *
 * Callees: 13
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F89A0  boost::detail::shared_count::shared_count<Caver::FontText>(Caver::FontText *)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001FC610  Caver::FontText::Draw(Caver::RenderingContext *)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 61
 *   insn=0x00000000004977E8 string=0x00000000004977EC "U"
 *   insn=0x00000000004977FC string=0x0000000000497800 "h"
 *   insn=0x0000000000497800 string=0x0000000000497804 ""
 *   insn=0x0000000000497808 string=0x000000000049780C "v"
 *   insn=0x0000000000497810 string=0x0000000000497814 "A"
 *   insn=0x000000000049781C string=0x0000000000497820 "h"
 *   insn=0x000000000049783C string=0x0000000000497840 "w\n"
 *   insn=0x0000000000497840 string=0x0000000000497844 "h"
 *   insn=0x000000000049784C string=0x0000000000497850 "dw"
 *   insn=0x0000000000497850 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000049785C string=0x0000000000497860 ""
 *   insn=0x00000000004978B8 string=0x00000000004978BC "9"
 *   insn=0x00000000004978BC string=0x00000000001F89A0 "0'"
 *   insn=0x00000000004978C8 string=0x00000000004978CC "!"
 *   insn=0x00000000004978CC string=0x00000000004978D0 "hRR"
 *   insn=0x00000000004978DC string=0x00000000004978E0 "i""
 *   insn=0x00000000004978E4 string=0x00000000004978E8 "4"
 *   insn=0x00000000004978EC string=0x00000000004978F0 ""
 *   insn=0x00000000004978FC string=0x0000000000497900 "\t@"
 *   insn=0x000000000049790C string=0x0000000000497910 ""
 *   insn=0x000000000049791C string=0x0000000000497920 "@"
 *   insn=0x0000000000497938 string=0x0000000000497954 "_z"
 *   insn=0x0000000000497954 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000049795C string=0x0000000000497960 "5"
 *   insn=0x0000000000497960 string=0x00000000004979A4 "u"
 *   insn=0x0000000000497964 string=0x0000000000497968 ""
 *   insn=0x0000000000497974 string=0x0000000000497978 "\t@"
 *   insn=0x0000000000497984 string=0x0000000000497988 ""
 *   insn=0x0000000000497994 string=0x0000000000497998 "@"
 *   insn=0x00000000004979A4 string=0x00000000004979A8 "5"
 *   insn=0x00000000004979A8 string=0x00000000004979EC "h"
 *   insn=0x00000000004979AC string=0x00000000004979B0 ""
 *   insn=0x00000000004979BC string=0x00000000004979C0 "\t@"
 *   insn=0x00000000004979CC string=0x00000000004979D0 ""
 *   insn=0x00000000004979DC string=0x00000000004979E0 "@"
 *   insn=0x00000000004979F8 string=0x00000000004979FC "i"
 *   insn=0x00000000004979F8 string=0x0000000000497A2C "u~@"
 *   insn=0x00000000004979FC string=0x0000000000497A00 ")=G"
 *   insn=0x0000000000497A00 string=0x0000000000497A04 "!"
 *   insn=0x0000000000497A08 string=0x0000000000497A0C "\t"
 *   insn=0x0000000000497A08 string=0x0000000000497A84 "\t"
 *   insn=0x0000000000497A0C string=0x0000000000497A10 "*"
 *   insn=0x0000000000497A10 string=0x0000000000497A14 "\n"
 *   insn=0x0000000000497A18 string=0x0000000000497A1C "?"
 *   insn=0x0000000000497A1C string=0x0000000000497A20 "l"
 *   insn=0x0000000000497A24 string=0x0000000000497A28 "_J"
 *   insn=0x0000000000497A2C string=0x0000000000497A30 "5"
 *   insn=0x0000000000497A34 string=0x0000000000497A38 ""
 *   insn=0x0000000000497A44 string=0x0000000000497A48 "\t@"
 *   insn=0x0000000000497A54 string=0x0000000000497A58 ""
 *   insn=0x0000000000497A64 string=0x0000000000497A68 "@"
 *   insn=0x0000000000497A84 string=0x0000000000497A88 "*"
 *   insn=0x0000000000497A88 string=0x0000000000497A8C "\n"
 *   insn=0x0000000000497A8C string=0x0000000000497A90 "?"
 *   insn=0x0000000000497AB4 string=0x0000000000497AB8 "W"
 *   insn=0x0000000000497AD8 string=0x0000000000497ADC ""
 *   insn=0x0000000000497AE4 string=0x0000000000497AE8 "eB"
 *   insn=0x0000000000497B00 string=0x0000000000497B04 "'"
 *   insn=0x0000000000497B10 string=0x00000000001FC610 "0'"
 *   insn=0x0000000000497B20 string=0x0000000000497B24 "K"
 *   insn=0x0000000000497B24 string=0x00000000001F9850 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUILabel::GUILabel(Caver::GUILabel *this)
{
  __int64 v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // [xsp+98h] [xbp-48h]
  __int64 v7; // [xsp+A0h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  Caver::GUIView::GUIView(this);
  *((_QWORD *)this + 30) = 0;
  *((_QWORD *)this + 31) = 0;
  *(_QWORD *)this = off_6D5F20;
  *((_QWORD *)this + 37) = 0;
  *((_QWORD *)this + 38) = 0x400000000LL;
  *((_QWORD *)this + 35) = 0;
  *((_QWORD *)this + 36) = 0;
  *((_QWORD *)this + 34) = 0;
  *((_BYTE *)this + 312) = 0;
  *((_DWORD *)this + 79) = 0;
  *((_BYTE *)this + 320) = 0;
  *((_DWORD *)this + 66) = -16777216;
  *((_QWORD *)this + 32) = &byte_6FD2F8;
  *((_BYTE *)this + 229) = 0;
  v2 = operator new(0xF0u);
  *(_BYTE *)(v2 + 44) = -1;
  *(_DWORD *)(v2 + 232) = -1;
  *(_DWORD *)(v2 + 16) = -16777216;
  *(_DWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 136) = 0;
  *(_QWORD *)(v2 + 160) = 0;
  *(_BYTE *)(v2 + 168) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 224) = 0;
  v6 = v2;
  *(_OWORD *)v2 = 0u;
  *(_OWORD *)(v2 + 24) = 0u;
  *(_OWORD *)(v2 + 120) = 0u;
  *(_OWORD *)(v2 + 104) = 0u;
  *(_OWORD *)(v2 + 88) = 0u;
  *(_OWORD *)(v2 + 144) = 0u;
  *(_OWORD *)(v2 + 48) = 0u;
  *(_OWORD *)(v2 + 64) = 0u;
  *(_OWORD *)(v2 + 192) = 0u;
  *(_OWORD *)(v2 + 208) = 0u;
  *(_OWORD *)(v2 + 176) = 0u;
  boost::detail::shared_count::shared_count<Caver::FontText>();
  boost::detail::sp_enable_shared_from_this();
  v3 = (_QWORD *)*((_QWORD *)this + 37);
  *((_QWORD *)this + 36) = v6;
  *((_QWORD *)this + 37) = v7;
  if ( v3 )
  {
    v4 = v3[1] - 1LL;
    v3[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v5 = v3[2] - 1LL;
      v3[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
}

