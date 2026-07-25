/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049FA60
 * Mangled: _ZN5Caver7GUIView19RemoveFromSuperviewEv
 * Demangled: Caver::GUIView::RemoveFromSuperview(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F58B0  Caver::GUIWindow::SetFirstResponder(boost::shared_ptr<Caver::GUIView> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 30
 *   insn=0x000000000049FA70 string=0x000000000049FA74 "U"
 *   insn=0x000000000049FA80 string=0x000000000049FA84 "h.@"
 *   insn=0x000000000049FA88 string=0x000000000049FA8C "h"
 *   insn=0x000000000049FA90 string=0x000000000049FA94 "y@"
 *   insn=0x000000000049FA98 string=0x000000000049FA9C "@"
 *   insn=0x000000000049FA9C string=0x000000000049FAA0 ""
 *   insn=0x000000000049FA9C string=0x000000000049FB44 "h"
 *   insn=0x000000000049FAA0 string=0x000000000049FAA4 ""
 *   insn=0x000000000049FAAC string=0x000000000049FAB0 "-@"
 *   insn=0x000000000049FAB4 string=0x000000000049FAB8 "#"
 *   insn=0x000000000049FAC0 string=0x000000000049FAC4 "{W"
 *   insn=0x000000000049FAC4 string=0x00000000001F58B0 "P'"
 *   insn=0x000000000049FAC8 string=0x000000000049FACC "4"
 *   insn=0x000000000049FACC string=0x000000000049FB10 "t.@"
 *   insn=0x000000000049FAD0 string=0x000000000049FAD4 ""
 *   insn=0x000000000049FAE4 string=0x000000000049FAE8 "\t@"
 *   insn=0x000000000049FAF0 string=0x000000000049FAF4 ""
 *   insn=0x000000000049FB04 string=0x000000000049FB08 "@"
 *   insn=0x000000000049FB18 string=0x000000000049FB1C "a@"
 *   insn=0x000000000049FB28 string=0x000000000049FB2C "T"
 *   insn=0x000000000049FB38 string=0x000000000049FB3C "e@"
 *   insn=0x000000000049FB48 string=0x000000000049FB4C "iB"
 *   insn=0x000000000049FB50 string=0x000000000049FB54 "A@"
 *   insn=0x000000000049FB84 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000049FB8C string=0x000000000049FB90 "4"
 *   insn=0x000000000049FB94 string=0x000000000049FB98 ""
 *   insn=0x000000000049FBA4 string=0x000000000049FBA8 "\t@"
 *   insn=0x000000000049FBB4 string=0x000000000049FBB8 ""
 *   insn=0x000000000049FBC4 string=0x000000000049FBC8 "@"
 *   insn=0x000000000049FBD4 string=0x000000000049FBD8 ";"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::GUIView::RemoveFromSuperview(_QWORD *this)
{
  _QWORD *v1; // x19
  __int64 v2; // x0
  _QWORD *v3; // x8
  _QWORD *v4; // x20
  __int64 v5; // x8

  v1 = this;
  _ReadStatusReg(TPIDR_EL0);
  if ( this[11] )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD *))(*this + 240LL))(this);
    if ( v2 )
    {
      v3 = *(_QWORD **)(v2 + 272);
      if ( v3 )
      {
        while ( v3 != v1 )
        {
          v3 = (_QWORD *)v3[11];
          if ( !v3 )
            goto LABEL_12;
        }
        Caver::GUIWindow::SetFirstResponder();
        v4 = (_QWORD *)v1[11];
        while ( ((*(__int64 (__fastcall **)(_QWORD *))(*v4 + 192LL))(v4) & 1) == 0 )
        {
          v4 = (_QWORD *)v4[11];
          if ( !v4 )
            goto LABEL_12;
        }
        (*(void (__fastcall **)(_QWORD *))(*v4 + 200LL))(v4);
      }
    }
LABEL_12:
    v5 = *v1;
    *((_BYTE *)v1 + 80) = 1;
    v1[11] = 0;
    return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v5 + 128))(v1);
  }
  return this;
}

