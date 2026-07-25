/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A3540
 * Mangled: _ZN5Caver9GUIWindow16DismissModalViewEPNS_7GUIViewE
 * Demangled: Caver::GUIWindow::DismissModalView(Caver::GUIView *)
 *
 * Callers: 2
 *   0x00000000001FA950  Caver::GUIWindow::DismissModalView(Caver::GUIView *)
 *   0x00000000004A31B4  Caver::GUIWindow::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x00000000004A3540 string=0x00000000004A3544 "\t"
 *   insn=0x00000000004A354C string=0x00000000004A3550 "!"
 *   insn=0x00000000004A354C string=0x00000000004A357C "H3"
 *   insn=0x00000000004A3550 string=0x00000000004A3554 "*,@"
 *   insn=0x00000000004A3550 string=0x00000000004A3574 ""
 *   insn=0x00000000004A3558 string=0x00000000004A355C "_"
 *   insn=0x00000000004A3560 string=0x00000000004A3564 ""
 *   insn=0x00000000004A3564 string=0x00000000004A3568 "?"
 *   insn=0x00000000004A3568 string=0x00000000004A356C "a"
 *   insn=0x00000000004A357C string=0x00000000004A3584 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIWindow::DismissModalView(__int64 this, Caver::GUIView *a2)
{
  _QWORD *v2; // x8
  _QWORD *v3; // x9

  v2 = *(_QWORD **)(this + 448);
  v3 = (_QWORD *)(this + 448);
  if ( v2 != (_QWORD *)(this + 448) )
  {
    if ( a2 )
    {
      while ( 1 )
      {
        this = v2[2];
        if ( *((_QWORD *)a2 + 11) == this )
          break;
        v2 = (_QWORD *)*v2;
        if ( v3 == v2 )
          return this;
      }
    }
    else
    {
      this = *(_QWORD *)(*(_QWORD *)(this + 456) + 16LL);
    }
  }
  *(_DWORD *)(this + 508) = 1050253722;
  *(_BYTE *)(this + 229) = 0;
  return this;
}

