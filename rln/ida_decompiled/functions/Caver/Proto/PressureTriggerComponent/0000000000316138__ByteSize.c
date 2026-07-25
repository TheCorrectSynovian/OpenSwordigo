/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000316138
 * Mangled: _ZNK5Caver5Proto24PressureTriggerComponent8ByteSizeEv
 * Demangled: Caver::Proto::PressureTriggerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F34D0  Caver::Proto::Program::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 25
 *   insn=0x0000000000316148 string=0x000000000031614C "h"
 *   insn=0x0000000000316150 string=0x0000000000316154 "\t"
 *   insn=0x0000000000316158 string=0x000000000031615C ")"
 *   insn=0x000000000031615C string=0x0000000000316160 "\n"
 *   insn=0x0000000000316160 string=0x0000000000316164 "4"
 *   insn=0x0000000000316168 string=0x000000000031616C "i"
 *   insn=0x0000000000316168 string=0x00000000003161C0 "h"
 *   insn=0x000000000031616C string=0x0000000000316170 "h"
 *   insn=0x0000000000316170 string=0x0000000000316174 ")"
 *   insn=0x0000000000316178 string=0x000000000031617C ")"
 *   insn=0x000000000031617C string=0x0000000000316180 "("
 *   insn=0x0000000000316188 string=0x00000000001F34D0 "P'"
 *   insn=0x000000000031619C string=0x00000000003161B0 "h*@"
 *   insn=0x00000000003161A4 string=0x000000000031620C "t\n"
 *   insn=0x00000000003161A8 string=0x00000000003161AC "\t"
 *   insn=0x00000000003161AC string=0x00000000001F61D0 "0'"
 *   insn=0x00000000003161B4 string=0x00000000003161B8 ")"
 *   insn=0x00000000003161B8 string=0x00000000003161BC "4"
 *   insn=0x00000000003161C0 string=0x00000000003161C4 "i"
 *   insn=0x00000000003161C4 string=0x00000000003161C8 "h"
 *   insn=0x00000000003161C8 string=0x00000000003161CC ")"
 *   insn=0x00000000003161D0 string=0x00000000003161D4 ")"
 *   insn=0x00000000003161D4 string=0x00000000003161D8 "("
 *   insn=0x00000000003161E8 string=0x00000000003161EC "b"
 *   insn=0x0000000000316200 string=0x0000000000316204 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PressureTriggerComponent::ByteSize(Caver::Proto::PressureTriggerComponent *this)
{
  int v2; // w8
  unsigned int v3; // w20
  Caver::Proto::PressureTriggerComponent *v4; // x8
  unsigned int v5; // w1
  unsigned int v6; // w21
  int v7; // w0
  Caver::Proto::PressureTriggerComponent *v8; // x8
  unsigned int v9; // w1
  unsigned int v10; // w21
  int v11; // w0

  v2 = *((unsigned __int8 *)this + 40);
  if ( *((_BYTE *)this + 40) )
  {
    v3 = (v2 << 31 >> 31) & 5 | v2 & 2;
    if ( (v2 & 4) != 0 )
    {
      if ( *((_QWORD *)this + 3) )
        v4 = this;
      else
        v4 = (Caver::Proto::PressureTriggerComponent *)Caver::Proto::PressureTriggerComponent::default_instance_;
      v6 = Caver::Proto::Program::ByteSize(*((Caver::Proto::Program **)v4 + 3));
      if ( v6 >= 0x80 )
        v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
               (google::protobuf::io::CodedOutputStream *)v6,
               v5);
      else
        v7 = 1;
      v2 = *((_DWORD *)this + 10);
      v3 += v6 + v7 + 1;
    }
    if ( (v2 & 8) != 0 )
    {
      if ( *((_QWORD *)this + 4) )
        v8 = this;
      else
        v8 = (Caver::Proto::PressureTriggerComponent *)Caver::Proto::PressureTriggerComponent::default_instance_;
      v10 = Caver::Proto::Program::ByteSize(*((Caver::Proto::Program **)v8 + 4));
      if ( v10 >= 0x80 )
        v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v10,
                v9);
      else
        v11 = 1;
      v3 += v10 + v11 + 1;
    }
  }
  else
  {
    v3 = 0;
  }
  *((_DWORD *)this + 2) = v3;
  return v3;
}

