/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032F920
 * Mangled: _ZN5Caver5Proto31ItemDropComponent_ItemDropEntryD0Ev
 * Demangled: Caver::Proto::ItemDropComponent_ItemDropEntry::~ItemDropComponent_ItemDropEntry()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FCBF0  Caver::Proto::ItemDropComponent_ItemDropEntry::SharedDtor(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x000000000032F92C string=0x000000000032F930 ""
 *   insn=0x000000000032F934 string=0x000000000032F938 "A"
 *   insn=0x000000000032F938 string=0x000000000032F93C "h"
 *   insn=0x000000000032F940 string=0x00000000001FCBF0 "0'"
 *   insn=0x000000000032F944 string=0x000000000032F948 "."
 *   insn=0x000000000032F948 string=0x00000000001F7600 "0'"
 *   insn=0x000000000032F954 string=0x000000000032F958 "V"
 *   insn=0x000000000032F958 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032F968 string=0x000000000032F96C "%"
 *   insn=0x000000000032F970 string=0x000000000032F974 "O"
 *   insn=0x000000000032F97C string=0x000000000032F980 "sz"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ItemDropComponent_ItemDropEntry::~ItemDropComponent_ItemDropEntry(
        Caver::Proto::ItemDropComponent_ItemDropEntry *this)
{
  *(_QWORD *)this = off_6C9540;
  Caver::Proto::ItemDropComponent_ItemDropEntry::SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

