/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000491DD0
 * Mangled: _ZN5Caver12GUIAlertView22TextFieldDidEndEditingEPNS_12GUITextFieldE
 * Demangled: Caver::GUIAlertView::TextFieldDidEndEditing(Caver::GUITextField *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200880  Caver::GUIAlertView::Dismiss(void)
 *
 * Referenced strings: 15
 *   insn=0x0000000000491DD0 string=0x0000000000491DD4 ")"
 *   insn=0x0000000000491DD4 string=0x0000000000491DD8 "*"
 *   insn=0x0000000000491DD8 string=0x0000000000491DDC "_"
 *   insn=0x0000000000491DDC string=0x0000000000491DE0 "+"
 *   insn=0x0000000000491DE0 string=0x0000000000491DE4 "+"
 *   insn=0x0000000000491DE8 string=0x0000000000491DEC "m"
 *   insn=0x0000000000491DF0 string=0x0000000000491DF4 "h"
 *   insn=0x0000000000491DFC string=0x0000000000491E2C ""
 *   insn=0x0000000000491E18 string=0x0000000000491E1C "?"
 *   insn=0x0000000000491E1C string=0x0000000000491E20 "a"
 *   insn=0x0000000000491E28 string=0x0000000000491E44 "_"
 *   insn=0x0000000000491E4C string=0x0000000000491E50 "Iq\t"
 *   insn=0x0000000000491E50 string=0x0000000000491E54 ")"
 *   insn=0x0000000000491E54 string=0x0000000000491E58 "ii"
 *   insn=0x0000000000491E5C string=0x0000000000491E60 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GUIAlertView *__fastcall Caver::GUIAlertView::TextFieldDidEndEditing(
        Caver::GUIAlertView *this,
        Caver::GUITextField *a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x11
  unsigned __int64 v5; // x13
  __int64 v6; // x12
  __int64 *v7; // x14
  __int64 v8; // x15
  __int64 v9; // x16
  __int64 v10; // t1
  __int64 *v11; // x13
  __int64 v12; // t1

  v2 = *((_QWORD *)this + 40);
  v3 = *((_QWORD *)this + 41) - v2;
  if ( (int)((unsigned __int64)v3 >> 4) < 1 )
    return this;
  v4 = (int)(v3 >> 4);
  if ( v4 <= 1 )
    v5 = 1;
  else
    v5 = (int)(v3 >> 4);
  if ( v5 <= 2 )
  {
    v6 = 0;
LABEL_10:
    v11 = (__int64 *)(v2 + 16 * v6);
    do
    {
      v12 = *v11;
      v11 += 2;
      ++v6;
      *(_BYTE *)(v12 + 229) = 0;
    }
    while ( v6 < v4 );
    goto LABEL_12;
  }
  v6 = v5 & 0x7FFFFFFFFFFFFFFELL;
  v7 = (__int64 *)(v2 + 16);
  v8 = v5 & 0x7FFFFFFFFFFFFFFELL;
  do
  {
    v9 = *(v7 - 2);
    v10 = *v7;
    v7 += 4;
    v8 -= 2;
    *(_BYTE *)(v9 + 229) = 0;
    *(_BYTE *)(v10 + 229) = 0;
  }
  while ( v8 );
  if ( v5 != v6 )
    goto LABEL_10;
LABEL_12:
  if ( (int)((unsigned __int64)v3 >> 4) > 0
    && *(Caver::GUITextField **)(v2 + (((v3 << 28) - 0x100000000LL) >> 28)) == a2 )
  {
    return (Caver::GUIAlertView *)Caver::GUIAlertView::Dismiss(this);
  }
  return this;
}

