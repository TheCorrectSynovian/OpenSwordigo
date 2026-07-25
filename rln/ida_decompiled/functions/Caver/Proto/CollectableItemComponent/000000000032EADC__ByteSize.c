/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032EADC
 * Mangled: _ZNK5Caver5Proto24CollectableItemComponent8ByteSizeEv
 * Demangled: Caver::Proto::CollectableItemComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F34D0  Caver::Proto::Program::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 48
 *   insn=0x000000000032EAEC string=0x000000000032EAF0 "i"
 *   insn=0x000000000032EAF0 string=0x000000000032EAF4 "I"
 *   insn=0x000000000032EAF4 string=0x000000000032EAF8 "i"
 *   insn=0x000000000032EAF8 string=0x000000000032EB24 "`"
 *   insn=0x000000000032EAFC string=0x000000000032EB00 ")"
 *   insn=0x000000000032EB00 string=0x000000000032EB04 "`"
 *   insn=0x000000000032EB00 string=0x000000000032EB64 "i"
 *   insn=0x000000000032EB08 string=0x000000000032EB40 "h"
 *   insn=0x000000000032EB0C string=0x000000000032EB10 """
 *   insn=0x000000000032EB1C string=0x000000000032EB20 "K"
 *   insn=0x000000000032EB20 string=0x000000000032EC4C "t\n"
 *   insn=0x000000000032EB28 string=0x000000000032EB48 "t"
 *   insn=0x000000000032EB30 string=0x000000000032EC64 "["
 *   insn=0x000000000032EB34 string=0x000000000032EB38 "i"
 *   insn=0x000000000032EB38 string=0x000000000032EB3C "\n"
 *   insn=0x000000000032EB40 string=0x000000000032EB44 ""
 *   insn=0x000000000032EB54 string=0x000000000032EB58 "i:@"
 *   insn=0x000000000032EB54 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000032EB58 string=0x000000000032EB5C ""
 *   insn=0x000000000032EB64 string=0x000000000032EB68 "i"
 *   insn=0x000000000032EB64 string=0x000000000032EB70 "u"
 *   insn=0x000000000032EB68 string=0x000000000032EB6C """
 *   insn=0x000000000032EB68 string=0x000000000032EBB4 "u"
 *   insn=0x000000000032EB74 string=0x000000000032EB78 ""
 *   insn=0x000000000032EB7C string=0x000000000032EB80 "b"
 *   insn=0x000000000032EB84 string=0x000000000032EB88 ""
 *   insn=0x000000000032EB88 string=0x000000000032EBA4 "H"
 *   insn=0x000000000032EB94 string=0x000000000032EB98 "i:@"
 *   insn=0x000000000032EB9C string=0x000000000032EBA0 ""
 *   insn=0x000000000032EBAC string=0x000000000032EBB0 ")"
 *   insn=0x000000000032EBB8 string=0x000000000032EBBC ""
 *   insn=0x000000000032EBC0 string=0x000000000032EBC4 "b"
 *   insn=0x000000000032EBC8 string=0x000000000032EBCC ""
 *   insn=0x000000000032EBCC string=0x000000000032EBE8 "H"
 *   insn=0x000000000032EBD8 string=0x000000000032EBDC "i:@"
 *   insn=0x000000000032EBE0 string=0x000000000032EBE4 ""
 *   insn=0x000000000032EBF4 string=0x000000000032EBF8 "?"
 *   insn=0x000000000032EBFC string=0x000000000032EC00 "i"
 *   insn=0x000000000032EC04 string=0x000000000032EC08 "h"
 *   insn=0x000000000032EC08 string=0x000000000032EC0C ")"
 *   insn=0x000000000032EC10 string=0x000000000032EC14 ")"
 *   insn=0x000000000032EC14 string=0x000000000032EC18 "("
 *   insn=0x000000000032EC1C string=0x000000000032EC20 ","
 *   insn=0x000000000032EC20 string=0x00000000001F34D0 "P'"
 *   insn=0x000000000032EC28 string=0x000000000032EC2C "b"
 *   insn=0x000000000032EC38 string=0x000000000032EC3C "e"
 *   insn=0x000000000032EC40 string=0x000000000032EC44 ""
 *   insn=0x000000000032EC64 string=0x000000000032EC68 "i:@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CollectableItemComponent::ByteSize(
        Caver::Proto::CollectableItemComponent *this,
        unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w8
  google::protobuf::io::CodedOutputStream *v7; // x0
  int v8; // w0
  _QWORD *v9; // x21
  __int64 v10; // x8
  int v11; // w10
  int v12; // w0
  _QWORD *v13; // x21
  __int64 v14; // x8
  int v15; // w10
  int v16; // w0
  Caver::Proto::CollectableItemComponent *v17; // x8
  unsigned int v18; // w1
  unsigned int v19; // w21
  int v20; // w0
  int v22; // w0

  LOBYTE(v3) = *((_BYTE *)this + 56);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_38;
  }
  if ( (*((_BYTE *)this + 56) & 1) != 0 )
  {
    v7 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v7 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
    else if ( (unsigned int)v7 >= 0x80 )
    {
      v22 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, a2);
      v3 = *((_DWORD *)this + 14);
      v4 = v22 + 1;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
    else
    {
      v4 = 2;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
  }
  else
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 56) & 2) == 0 )
      goto LABEL_17;
  }
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v6 = 11;
  }
  else if ( (unsigned int)v5 >= 0x80 )
  {
    v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
    v3 = *((_DWORD *)this + 14);
    v6 = v8 + 1;
  }
  else
  {
    v6 = 2;
  }
  v4 += v6;
LABEL_17:
  if ( (v3 & 4) != 0 )
  {
    v9 = (_QWORD *)*((_QWORD *)this + 3);
    v10 = *(_QWORD *)(*v9 - 24LL);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v10,
              a2);
      v3 = *((_DWORD *)this + 14);
      v11 = v12;
      v10 = *(_QWORD *)(*v9 - 24LL);
    }
    else
    {
      v11 = 1;
    }
    v4 += v11 + v10 + 1;
    if ( (v3 & 8) == 0 )
      goto LABEL_28;
    goto LABEL_24;
  }
  if ( (v3 & 8) != 0 )
  {
LABEL_24:
    v13 = (_QWORD *)*((_QWORD *)this + 4);
    v14 = *(_QWORD *)(*v13 - 24LL);
    if ( (unsigned int)v14 >= 0x80 )
    {
      v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v14,
              a2);
      v3 = *((_DWORD *)this + 14);
      v15 = v16;
      v14 = *(_QWORD *)(*v13 - 24LL);
    }
    else
    {
      v15 = 1;
    }
    v4 += v15 + v14 + 1;
  }
LABEL_28:
  if ( (v3 & 0x10) != 0 )
    v4 += 2;
  if ( (v3 & 0x20) != 0 )
  {
    if ( *((_QWORD *)this + 6) )
      v17 = this;
    else
      v17 = (Caver::Proto::CollectableItemComponent *)Caver::Proto::CollectableItemComponent::default_instance_;
    v19 = Caver::Proto::Program::ByteSize(*((Caver::Proto::Program **)v17 + 6));
    if ( v19 >= 0x80 )
      v20 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v19,
              v18);
    else
      v20 = 1;
    v4 += v19 + v20 + 1;
  }
LABEL_38:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

