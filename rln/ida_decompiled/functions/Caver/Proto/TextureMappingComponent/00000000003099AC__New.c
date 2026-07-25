/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003099AC
 * Mangled: _ZNK5Caver5Proto23TextureMappingComponent3NewEv
 * Demangled: Caver::Proto::TextureMappingComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 7
 *   insn=0x00000000003099B4 string=0x00000000003099B8 "\n"
 *   insn=0x00000000003099B8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003099BC string=0x00000000003099C0 "q@"
 *   insn=0x00000000003099C8 string=0x00000000003099CC ")-F"
 *   insn=0x00000000003099CC string=0x00000000003099D0 "A"
 *   insn=0x00000000003099D8 string=0x00000000003099DC "\t"
 *   insn=0x00000000003099DC string=0x00000000003099E0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TextureMappingComponent::New(Caver::Proto::TextureMappingComponent *this)
{
  __int64 result; // x0

  result = operator new(0x30u);
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 16) = &Caver::Proto::TextureMappingComponent::_default_texture_name_;
  *(_QWORD *)result = off_6C7920;
  *(_DWORD *)(result + 40) = 0;
  return result;
}

