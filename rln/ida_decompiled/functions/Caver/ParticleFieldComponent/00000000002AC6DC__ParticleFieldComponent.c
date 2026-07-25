/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AC6DC
 * Mangled: _ZN5Caver22ParticleFieldComponentC2Ev
 * Demangled: Caver::ParticleFieldComponent::ParticleFieldComponent(void)
 *
 * Callers: 2
 *   0x00000000002022C0  Caver::ParticleFieldComponent::ParticleFieldComponent(void)
 *   0x00000000002AC548  Caver::ParticleSystem::~ParticleSystem()
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x00000000002AC6E8 string=0x00000000002AC6EC ""
 *   insn=0x00000000002AC6F0 string=0x00000000002AC6F4 "J"
 *   insn=0x00000000002AC6F8 string=0x00000000002AC6FC "a"
 *   insn=0x00000000002AC6FC string=0x00000000002AC700 ""
 *   insn=0x00000000002AC700 string=0x00000000002AC704 "H"
 *   insn=0x00000000002AC708 string=0x00000000002AC70C "H"
 *   insn=0x00000000002AC70C string=0x00000000002AC710 "KA"
 *   insn=0x00000000002AC710 string=0x00000000002AC714 "?"
 *   insn=0x00000000002AC718 string=0x00000000002AC71C ""
 *   insn=0x00000000002AC720 string=0x00000000002AC724 "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::ParticleFieldComponent::ParticleFieldComponent(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  this[2].n128_u64[0] = 0;
  this[2].n128_u64[1] = 0;
  this[3].n128_u8[0] = 0;
  this[3].n128_u64[1] = (unsigned __int64)&byte_6FD2F8;
  result.n128_u64[0] = (unsigned __int64)&off_6C3908;
  this[4].n128_u64[1] = 0;
  result.n128_u64[1] = (unsigned __int64)&off_6C3948;
  this->n128_u64[0] = (unsigned __int64)off_6C37F0;
  this[5].n128_u64[0] = 0;
  this[5].n128_u64[1] = (unsigned __int64)&this[4].n128_u64[1];
  this[6].n128_u64[0] = (unsigned __int64)&this[4].n128_u64[1];
  this[6].n128_u64[1] = 0;
  this[1] = result;
  return result;
}

