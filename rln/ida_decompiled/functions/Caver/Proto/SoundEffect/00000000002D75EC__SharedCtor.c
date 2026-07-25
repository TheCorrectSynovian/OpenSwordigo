/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D75EC
 * Mangled: _ZN5Caver5Proto11SoundEffect10SharedCtorEv
 * Demangled: Caver::Proto::SoundEffect::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000002D75F4 string=0x00000000002D75F8 ""
 *   insn=0x00000000002D75F8 string=0x00000000002D75FC " "
 *   insn=0x00000000002D75FC string=0x00000000002D7600 "i "
 *   insn=0x00000000002D7600 string=0x00000000002D7604 ")uC"
 *   insn=0x00000000002D7610 string=0x00000000002D7614 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::SoundEffect::SharedCtor(Caver::Proto::SoundEffect *this)
{
  double result; // d0
  __int128 v2; // q1

  *((_DWORD *)this + 2) = 0;
  result = 5.23869073e-11;
  *(_QWORD *)&v2 = &Caver::Proto::SoundEffect::_default_name_;
  *((_QWORD *)this + 4) = 0x3DCCCCCD3F800000LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::SoundEffect::_default_resource_name_;
  *((_OWORD *)this + 1) = v2;
  return result;
}

