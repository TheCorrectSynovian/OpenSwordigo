/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040D314
 * Mangled: _ZN5boost10shared_ptrIN5Caver20InventoryTrinketSlotEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::InventoryTrinketSlot>::shared_ptr<Caver::InventoryTrinketSlot>(Caver::InventoryTrinketSlot *)
 *
 * Callers: 1
 *   0x00000000001FA370  boost::shared_ptr<Caver::InventoryTrinketSlot>::shared_ptr<Caver::InventoryTrinketSlot>(Caver::InventoryTrinketSlot *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F80  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryTrinketSlot,Caver::InventoryTrinketSlot>(boost::shared_ptr<Caver::InventoryTrinketSlot> const*,Caver::InventoryTrinketSlot *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x000000000040D330 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000040D334 string=0x000000000040D338 ")]B"
 *   insn=0x000000000040D344 string=0x000000000040D348 "(A"
 *   insn=0x000000000040D34C string=0x000000000040D350 ""
 *   insn=0x000000000040D358 string=0x000000000040D35C "`""
 *   insn=0x000000000040D368 string=0x00000000001F4F80 "P'"
 *   insn=0x000000000040D37C string=0x000000000040D380 "4"
 *   insn=0x000000000040D384 string=0x000000000040D388 ""
 *   insn=0x000000000040D394 string=0x000000000040D398 "\t@"
 *   insn=0x000000000040D3A4 string=0x000000000040D3A8 ""
 *   insn=0x000000000040D3B4 string=0x000000000040D3B8 "@"
 *   insn=0x000000000040D3C4 string=0x000000000040D3C8 "?"
 *   insn=0x000000000040D3D0 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000040D3D4 string=0x000000000040D3D8 "h"
 *   insn=0x000000000040D3D8 string=0x000000000040D3DC "!@"
 *   insn=0x000000000040D3EC string=0x000000000040D3F0 "h"
 *   insn=0x000000000040D3F0 string=0x00000000001FD590 "0'"
 *   insn=0x000000000040D3FC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::InventoryTrinketSlot>::shared_ptr<Caver::InventoryTrinketSlot>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6D1D58;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryTrinketSlot,Caver::InventoryTrinketSlot>();
  return result;
}

