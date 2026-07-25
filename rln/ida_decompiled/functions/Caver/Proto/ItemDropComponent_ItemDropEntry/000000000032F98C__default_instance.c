/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032F98C
 * Mangled: _ZN5Caver5Proto31ItemDropComponent_ItemDropEntry16default_instanceEv
 * Demangled: Caver::Proto::ItemDropComponent_ItemDropEntry::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 4
 *   insn=0x000000000032F998 string=0x000000000032F99C "s"
 *   insn=0x000000000032F99C string=0x000000000032F9A0 "`"
 *   insn=0x000000000032F9A0 string=0x000000000032F9A4 "`"
 *   insn=0x000000000032F9A8 string=0x000000000032F9AC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ItemDropComponent_ItemDropEntry::default_instance(
        Caver::Proto::ItemDropComponent_ItemDropEntry *this)
{
  __int64 result; // x0

  result = Caver::Proto::ItemDropComponent_ItemDropEntry::default_instance_;
  if ( !Caver::Proto::ItemDropComponent_ItemDropEntry::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ItemDropComponent_ItemDropEntry::default_instance_;
  }
  return result;
}

