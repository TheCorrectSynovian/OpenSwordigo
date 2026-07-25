/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032DD7C
 * Mangled: _ZNK5Caver5Proto19SpawnPointComponent8ByteSizeEv
 * Demangled: Caver::Proto::SpawnPointComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FE930  Caver::Proto::Vector3::ByteSize(void)
 *
 * Referenced strings: 17
 *   insn=0x000000000032DD8C string=0x000000000032DD90 "hb@9"
 *   insn=0x000000000032DD98 string=0x000000000032DDB0 "`"
 *   insn=0x000000000032DD9C string=0x000000000032DDA0 "H"
 *   insn=0x000000000032DDA0 string=0x000000000032DDA4 "#"
 *   insn=0x000000000032DDA4 string=0x000000000032DE30 "t\n"
 *   insn=0x000000000032DDA8 string=0x000000000032DDAC "!"
 *   insn=0x000000000032DDB4 string=0x000000000032DDCC "t"
 *   insn=0x000000000032DDC0 string=0x000000000032DDC4 "("
 *   insn=0x000000000032DDD8 string=0x000000000032DDDC "h"
 *   insn=0x000000000032DDD8 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000032DDE0 string=0x000000000032DDE4 "h"
 *   insn=0x000000000032DDE8 string=0x000000000032DDEC "h\n@"
 *   insn=0x000000000032DDEC string=0x000000000032DDF0 ")%@"
 *   insn=0x000000000032DDF4 string=0x000000000032DDF8 ")"
 *   insn=0x000000000032DDF8 string=0x000000000032DDFC "("
 *   insn=0x000000000032DE0C string=0x000000000032DE10 "b"
 *   insn=0x000000000032DE24 string=0x000000000032DE28 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpawnPointComponent::ByteSize(
        Caver::Proto::SpawnPointComponent *this,
        unsigned int a2)
{
  char v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  Caver::Proto::SpawnPointComponent *v6; // x8
  unsigned int v7; // w1
  unsigned int v8; // w21
  int v9; // w0

  v3 = *((_BYTE *)this + 24);
  if ( v3 )
  {
    if ( (*((_BYTE *)this + 24) & 1) != 0 )
    {
      v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
      if ( ((unsigned int)v5 & 0x80000000) != 0 )
      {
        v4 = 11;
        if ( (v3 & 2) == 0 )
          goto LABEL_20;
      }
      else if ( (unsigned int)v5 >= 0x80 )
      {
        v4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2) + 1;
        if ( (*((_DWORD *)this + 6) & 2) == 0 )
          goto LABEL_20;
      }
      else
      {
        v4 = 2;
        if ( (v3 & 2) == 0 )
          goto LABEL_20;
      }
    }
    else
    {
      v4 = 0;
      if ( (*((_BYTE *)this + 24) & 2) == 0 )
        goto LABEL_20;
    }
    if ( *((_QWORD *)this + 2) )
      v6 = this;
    else
      v6 = (Caver::Proto::SpawnPointComponent *)Caver::Proto::SpawnPointComponent::default_instance_;
    v8 = Caver::Proto::Vector3::ByteSize(*((Caver::Proto::Vector3 **)v6 + 2));
    if ( v8 >= 0x80 )
      v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)v8,
             v7);
    else
      v9 = 1;
    v4 += v8 + v9 + 1;
  }
  else
  {
    v4 = 0;
  }
LABEL_20:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

