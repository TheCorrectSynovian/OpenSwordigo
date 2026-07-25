/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002934EC
 * Mangled: _ZN5Caver29BatMonsterControllerComponent7PrepareEv
 * Demangled: Caver::BatMonsterControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *
 * Referenced strings: 11
 *   insn=0x00000000002934F8 string=0x00000000002934FC "hB@"
 *   insn=0x0000000000293500 string=0x0000000000293504 "`"
 *   insn=0x0000000000293508 string=0x000000000029350C "u"
 *   insn=0x000000000029350C string=0x0000000000293510 "hB@"
 *   insn=0x000000000029350C string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000293510 string=0x0000000000293514 "H"
 *   insn=0x0000000000293514 string=0x000000000029351C "E"
 *   insn=0x000000000029351C string=0x00000000001FCE30 "0'"
 *   insn=0x0000000000293520 string=0x0000000000293524 ""
 *   insn=0x0000000000293530 string=0x0000000000293534 " "
 *   insn=0x000000000029353C string=0x0000000000293540 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::BatMonsterControllerComponent::Prepare(Caver::BatMonsterControllerComponent *this)
{
  Caver::BatMonsterControllerComponent *v1; // x19
  __int64 v2; // x8
  float result; // s0

  v1 = this;
  v2 = *((_QWORD *)this + 16);
  if ( v2
    || (this = (Caver::BatMonsterControllerComponent *)Caver::ComponentOutletBase::Connect(
                                                         (Caver::BatMonsterControllerComponent *)((char *)this + 112),
                                                         this),
        (v2 = *((_QWORD *)v1 + 16)) != 0) )
  {
    *(_DWORD *)(v2 + 232) = 0;
  }
  result = (float)((float)(int)Caver::fastrandom(this) / (float)Caver::FASTRANDOM_MAX) * 10.0;
  *((float *)v1 + 64) = result;
  return result;
}

