/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A1224
 * Mangled: _ZN5Caver7GUIView31FindAndSetSubviewFirstResponderEv
 * Demangled: Caver::GUIView::FindAndSetSubviewFirstResponder(void)
 *
 * Callers: 2
 *   0x00000000001F9740  Caver::GUIView::FindAndSetSubviewFirstResponder(void)
 *   0x00000000004A1224  Caver::GUIView::FindAndSetSubviewFirstResponder(void)
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x00000000004A1230 string=0x00000000004A1234 "h"
 *   insn=0x00000000004A1234 string=0x00000000004A1238 "a@"
 *   insn=0x00000000004A1240 string=0x00000000004A1244 "h"
 *   insn=0x00000000004A1240 string=0x00000000004A125C "t"
 *   insn=0x00000000004A1248 string=0x00000000004A124C "e@"
 *   insn=0x00000000004A1264 string=0x00000000004A1268 "\t"
 *   insn=0x00000000004A127C string=0x00000000004A1280 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::FindAndSetSubviewFirstResponder(Caver::GUIView *this)
{
  char *v3; // x19
  char *v4; // x20
  char *v5; // t1

  if ( ((*(__int64 (__fastcall **)(Caver::GUIView *))(*(_QWORD *)this + 192LL))(this) & 1) != 0 )
  {
    (*(void (__fastcall **)(Caver::GUIView *))(*(_QWORD *)this + 200LL))(this);
    return 1;
  }
  else
  {
    v5 = (char *)*((_QWORD *)this + 4);
    v3 = (char *)this + 32;
    v4 = v5;
    if ( v3 == v5 )
    {
      return 0;
    }
    else
    {
      while ( (Caver::GUIView::FindAndSetSubviewFirstResponder(*((Caver::GUIView **)v4 + 2)) & 1) == 0 )
      {
        v4 = *(char **)v4;
        if ( v3 == v4 )
          return 0;
      }
      return 1;
    }
  }
}

