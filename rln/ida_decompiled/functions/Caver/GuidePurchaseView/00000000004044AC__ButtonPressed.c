/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004044AC
 * Mangled: _ZN5Caver17GuidePurchaseView13ButtonPressedEPvPNS_8GUIEventE
 * Demangled: Caver::GuidePurchaseView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x0000000000401D04  Caver::GuidePurchaseView::GuidePurchaseView(void)
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x00000000004044AC string=0x00000000004044B0 "\t"
 *   insn=0x00000000004044B0 string=0x00000000004044B4 "?"
 *   insn=0x00000000004044B8 string=0x00000000004044BC "\t"
 *   insn=0x00000000004044BC string=0x00000000004044C0 "?"
 *   insn=0x00000000004044C4 string=0x00000000004044C8 "\t"
 *   insn=0x00000000004044C8 string=0x00000000004044CC "?"
 *   insn=0x00000000004044CC string=0x00000000004044D0 "a"
 *   insn=0x00000000004044D4 string=0x00000000004044D8 " "
 *   insn=0x00000000004044D8 string=0x00000000004044DC "\t"
 *   insn=0x00000000004044E0 string=0x00000000004044E4 ""\t@"
 *   insn=0x00000000004044E4 string=0x00000000004044E8 "@"
 *   insn=0x00000000004044EC string=0x00000000004044F0 "`"
 *   insn=0x00000000004044F0 string=0x00000000004044F4 "\t"
 *   insn=0x00000000004044F8 string=0x00000000004044FC """
 *   insn=0x00000000004044FC string=0x0000000000404500 "@"
 *   insn=0x0000000000404508 string=0x000000000040450C "\t"
 *   insn=0x0000000000404510 string=0x0000000000404514 """
 *   insn=0x0000000000404514 string=0x0000000000404518 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::GuidePurchaseView::ButtonPressed(_QWORD *result, __int64 a2)
{
  _QWORD *v2; // x8

  v2 = result;
  if ( result[40] == a2 )
  {
    result = (_QWORD *)result[30];
    if ( result )
      return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD *))*result)(result, v2);
  }
  else if ( result[38] == a2 )
  {
    result = (_QWORD *)result[30];
    if ( result )
      return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*result + 8LL))(result, v2);
  }
  else if ( result[42] == a2 )
  {
    result = (_QWORD *)result[30];
    if ( result )
      return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*result + 16LL))(result, v2);
  }
  return result;
}

