/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E5CB4
 * Mangled: _ZN6google8protobuf2io25CopyingInputStreamAdaptorD2Ev
 * Demangled: google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor()
 *
 * Callers: 1
 *   0x00000000001FBD80  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor()
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBD80  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor()
 *   0x0000000000201E10  google::protobuf::io::ZeroCopyInputStream::~ZeroCopyInputStream()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004E5D6C  google::protobuf::io::CopyingInputStreamAdaptor::Next(void const**,int *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x00000000004E5CC0 string=0x00000000004E5CC4 "\t"
 *   insn=0x00000000004E5CC4 string=0x00000000004E5CC8 "hB@9)AF"
 *   insn=0x00000000004E5CC8 string=0x00000000004E5CCC ")AF"
 *   insn=0x00000000004E5CCC string=0x00000000004E5CD0 ")A"
 *   insn=0x00000000004E5CD0 string=0x00000000004E5CD4 "i"
 *   insn=0x00000000004E5CD8 string=0x00000000004E5CDC "`"
 *   insn=0x00000000004E5CD8 string=0x00000000004E5CF0 "`"
 *   insn=0x00000000004E5CE0 string=0x00000000004E5CE4 ""
 *   insn=0x00000000004E5CE4 string=0x00000000004E5CE8 ""
 *   insn=0x00000000004E5CF0 string=0x00000000004E5CF4 "@"
 *   insn=0x00000000004E5CF8 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004E5D04 string=0x00000000004E5D08 "Bp"
 *   insn=0x00000000004E5D10 string=0x00000000004E5D14 "h"
 *   insn=0x00000000004E5D20 string=0x00000000004E5D24 ";p"
 *   insn=0x00000000004E5D44 string=0x00000000001FBD80 "0'"
 *   insn=0x00000000004E5D50 string=0x00000000004E5D54 "WE"
 *   insn=0x00000000004E5D54 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004E5D5C string=0x00000000004E5D60 "TE"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(
        google::protobuf::io::CopyingInputStreamAdaptor *this)
{
  int v2; // w8
  __int64 v3; // x0
  void *v4; // x0

  v2 = *((unsigned __int8 *)this + 16);
  *(_QWORD *)this = off_6D84E0;
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 1);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = (void *)*((_QWORD *)this + 4);
  if ( v4 )
    operator delete[](v4);
  google::protobuf::io::ZeroCopyInputStream::~ZeroCopyInputStream(this);
}

