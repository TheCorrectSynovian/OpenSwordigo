/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FC86C
 * Mangled: _ZNK5Caver5Proto14ObjectTemplate13IsInitializedEv
 * Demangled: Caver::Proto::ObjectTemplate::IsInitialized(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000002FC878 string=0x00000000002FC87C "I"
 *   insn=0x00000000002FC87C string=0x00000000002FC880 "@"
 *   insn=0x00000000002FC880 string=0x00000000002FC884 ")ME"
 *   insn=0x00000000002FC888 string=0x00000000002FC88C ")"
 *   insn=0x00000000002FC88C string=0x00000000002FC890 "("
 *   insn=0x00000000002FC894 string=0x00000000002FC898 ""
 *   insn=0x00000000002FC898 string=0x00000000002FC89C ""
 *   insn=0x00000000002FC8A4 string=0x00000000002FC8A8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::Proto::ObjectTemplate::IsInitialized(Caver::Proto::ObjectTemplate *this)
{
  Caver::Proto::ObjectTemplate *v1; // x8
  _BOOL8 result; // x0

  result = 1;
  if ( (*((_BYTE *)this + 28) & 1) != 0 )
  {
    v1 = *((_QWORD *)this + 2) ? this : (Caver::Proto::ObjectTemplate *)Caver::Proto::ObjectTemplate::default_instance_;
    if ( ((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 2) + 40LL))(*((_QWORD *)v1 + 2)) & 1) == 0 )
      return 0;
  }
  return result;
}

