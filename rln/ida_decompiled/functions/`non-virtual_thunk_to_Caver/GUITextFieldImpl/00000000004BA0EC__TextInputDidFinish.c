/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA0EC
 * Mangled: _ZThn320_N5Caver16GUITextFieldImpl18TextInputDidFinishEv
 * Demangled: `non-virtual thunk to'Caver::GUITextFieldImpl::TextInputDidFinish(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004BA104 string=0x00000000004BA108 ""
 *   insn=0x00000000004BA104 string=0x00000000004BA11C "h"
 *   insn=0x00000000004BA10C string=0x00000000004BA110 ""
 *   insn=0x00000000004BA12C string=0x00000000004BA130 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GUITextFieldImpl::TextInputDidFinish(Caver::GUITextFieldImpl *this)
{
  __int64 v2; // x0
  char *v3; // x19
  __int64 result; // x0

  v2 = *((_QWORD *)this - 1);
  v3 = (char *)this - 320;
  if ( !v2 )
    return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 208LL))(v3);
  result = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 8LL))(v2, (char *)this - 320);
  if ( (result & 1) != 0 )
    return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 208LL))(v3);
  return result;
}

