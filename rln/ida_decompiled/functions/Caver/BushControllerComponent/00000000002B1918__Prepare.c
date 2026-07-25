/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B1918
 * Mangled: _ZN5Caver23BushControllerComponent7PrepareEv
 * Demangled: Caver::BushControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *
 * Referenced strings: 10
 *   insn=0x00000000002B192C string=0x00000000002B1944 "tB@"
 *   insn=0x00000000002B1934 string=0x00000000002B1938 "j"
 *   insn=0x00000000002B1938 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002B1948 string=0x00000000002B194C "`"
 *   insn=0x00000000002B1948 string=0x00000000002B195C "5-"
 *   insn=0x00000000002B1950 string=0x00000000002B1954 "c"
 *   insn=0x00000000002B1954 string=0x00000000002B1958 "tB@"
 *   insn=0x00000000002B195C string=0x00000000001FCE30 "0'"
 *   insn=0x00000000002B1960 string=0x00000000002B1964 ""
 *   insn=0x00000000002B1978 string=0x00000000002B197C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::BushControllerComponent::Prepare(Caver::BushControllerComponent *this)
{
  Caver::BushControllerComponent *v1; // x20
  _QWORD *v2; // x19
  float result; // s0
  __int64 v4; // x20

  v1 = this;
  v2 = (_QWORD *)*((_QWORD *)this + 16);
  if ( v2
    || (this = (Caver::BushControllerComponent *)Caver::ComponentOutletBase::Connect(
                                                   (Caver::BushControllerComponent *)((char *)this + 112),
                                                   this),
        (v2 = (_QWORD *)*((_QWORD *)v1 + 16)) != 0) )
  {
    v4 = v2[16];
    if ( !v4 )
    {
      this = (Caver::BushControllerComponent *)Caver::ComponentOutletBase::Connect(
                                                 (Caver::ComponentOutletBase *)(v2 + 14),
                                                 (const Caver::Component *)v2);
      v4 = v2[16];
    }
    result = (float)((float)(int)Caver::fastrandom(this) / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
    *(float *)(v4 + 212) = result;
  }
  return result;
}

