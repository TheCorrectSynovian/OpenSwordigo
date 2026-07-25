/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040E7E0
 * Mangled: _ZN5boost10shared_ptrIN5Caver17DraggableMenuItemEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::DraggableMenuItem>::shared_ptr<Caver::DraggableMenuItem>(Caver::DraggableMenuItem *)
 *
 * Callers: 2
 *   0x00000000001F8450  boost::shared_ptr<Caver::DraggableMenuItem>::shared_ptr<Caver::DraggableMenuItem>(Caver::DraggableMenuItem *)
 *   0x000000000040E4D0  Caver::InventoryTrinketSlot::TouchMoved(Caver::FWTouch const&)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5920  Caver::MenuItemSlot::SetSelected(bool)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FF220  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 22
 *   insn=0x000000000040E7F8 string=0x000000000040E7FC "y"
 *   insn=0x000000000040E7FC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000040E800 string=0x000000000040E804 ")QB"
 *   insn=0x000000000040E810 string=0x000000000040E814 "(A"
 *   insn=0x000000000040E818 string=0x000000000040E81C ""
 *   insn=0x000000000040E824 string=0x000000000040E828 "`""
 *   insn=0x000000000040E830 string=0x000000000040E834 "{"
 *   insn=0x000000000040E848 string=0x000000000040E84C "4"
 *   insn=0x000000000040E850 string=0x000000000040E854 ""
 *   insn=0x000000000040E860 string=0x000000000040E864 "\t@"
 *   insn=0x000000000040E870 string=0x000000000040E874 ""
 *   insn=0x000000000040E880 string=0x000000000040E884 "@"
 *   insn=0x000000000040E898 string=0x000000000040E89C "Q"
 *   insn=0x000000000040E89C string=0x00000000001F45E0 "P'"
 *   insn=0x000000000040E8A0 string=0x000000000040E8A4 "h"
 *   insn=0x000000000040E8A4 string=0x000000000040E8A8 "!@"
 *   insn=0x000000000040E8B8 string=0x000000000040E8BC "5"
 *   insn=0x000000000040E8BC string=0x00000000001FD590 "0'"
 *   insn=0x000000000040E8C4 string=0x000000000040E8C8 "("
 *   insn=0x000000000040E8C8 string=0x000000000040E8CC "\t"
 *   insn=0x000000000040E8D4 string=0x000000000040E8D8 ""
 *   insn=0x000000000040E8E8 string=0x00000000001F5920 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::DraggableMenuItem>::shared_ptr<Caver::DraggableMenuItem>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6D1F78;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>();
  return result;
}

