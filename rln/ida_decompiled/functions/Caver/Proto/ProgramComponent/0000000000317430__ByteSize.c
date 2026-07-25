/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000317430
 * Mangled: _ZNK5Caver5Proto16ProgramComponent8ByteSizeEv
 * Demangled: Caver::Proto::ProgramComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F34D0  Caver::Proto::Program::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 23
 *   insn=0x0000000000317440 string=0x0000000000317444 "h"@"
 *   insn=0x000000000031744C string=0x0000000000317450 "\t"
 *   insn=0x0000000000317450 string=0x0000000000317454 "*\t"
 *   insn=0x0000000000317458 string=0x000000000031745C "4"
 *   insn=0x0000000000317460 string=0x0000000000317464 "`"
 *   insn=0x0000000000317460 string=0x000000000031749C "h"
 *   insn=0x0000000000317468 string=0x0000000000317484 "i"
 *   insn=0x0000000000317470 string=0x000000000031748C "Q{"
 *   insn=0x0000000000317474 string=0x0000000000317478 ""
 *   insn=0x0000000000317478 string=0x0000000000317498 "4"
 *   insn=0x0000000000317480 string=0x00000000003174E8 "t\n"
 *   insn=0x000000000031748C string=0x0000000000317490 "h"@"
 *   insn=0x000000000031748C string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000317490 string=0x0000000000317494 "\t"
 *   insn=0x000000000031749C string=0x00000000003174A0 "i"
 *   insn=0x00000000003174A0 string=0x00000000003174A4 "h"
 *   insn=0x00000000003174A4 string=0x00000000003174A8 ")uC"
 *   insn=0x00000000003174AC string=0x00000000003174B0 ")"
 *   insn=0x00000000003174B0 string=0x00000000003174B4 "("
 *   insn=0x00000000003174BC string=0x00000000001F34D0 "P'"
 *   insn=0x00000000003174C4 string=0x00000000003174C8 "b"
 *   insn=0x00000000003174D4 string=0x00000000003174D8 ">{"
 *   insn=0x00000000003174DC string=0x00000000003174E0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ProgramComponent::ByteSize(Caver::Proto::ProgramComponent *this, unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  int v7; // w0
  Caver::Proto::ProgramComponent *v8; // x8
  unsigned int v9; // w1
  unsigned int v10; // w21
  int v11; // w0

  v3 = *((_DWORD *)this + 8);
  if ( (_BYTE)v3 )
  {
    if ( (v3 & 2) != 0 )
      v4 = 2 * (v3 & 1) + 2;
    else
      v4 = 2 * (v3 & 1);
    if ( (v3 & 4) != 0 )
    {
      v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
      if ( ((unsigned int)v5 & 0x80000000) != 0 )
      {
        v6 = 11;
      }
      else if ( (unsigned int)v5 >= 0x80 )
      {
        v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
        v3 = *((_DWORD *)this + 8);
        v6 = v7 + 1;
      }
      else
      {
        v6 = 2;
      }
      v4 += v6;
    }
    if ( (v3 & 8) != 0 )
    {
      if ( *((_QWORD *)this + 3) )
        v8 = this;
      else
        v8 = (Caver::Proto::ProgramComponent *)Caver::Proto::ProgramComponent::default_instance_;
      v10 = Caver::Proto::Program::ByteSize(*((Caver::Proto::Program **)v8 + 3));
      if ( v10 >= 0x80 )
        v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v10,
                v9);
      else
        v11 = 1;
      v4 += v10 + v11 + 1;
    }
  }
  else
  {
    v4 = 0;
  }
  *((_DWORD *)this + 2) = v4;
  return v4;
}

