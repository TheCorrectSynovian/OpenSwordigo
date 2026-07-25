/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004127BC
 * Mangled: _ZN5boost20checked_array_deleteINS_10shared_ptrIN5Caver18InventoryItemPanelEEEEEvPT_
 * Demangled: boost::checked_array_delete<boost::shared_ptr<Caver::InventoryItemPanel>>(boost::shared_ptr<Caver::InventoryItemPanel> *)
 *
 * Callers: 2
 *   0x0000000000200D00  boost::checked_array_delete<boost::shared_ptr<Caver::InventoryItemPanel>>(boost::shared_ptr<Caver::InventoryItemPanel> *)
 *   0x00000000004123BC  Caver::InventoryView::~InventoryView()
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8B60  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryItemPanel,Caver::InventoryItemPanel>(boost::shared_ptr<Caver::InventoryItemPanel> const*,Caver::InventoryItemPanel *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 47
 *   insn=0x00000000004127D8 string=0x00000000004127DC "h"
 *   insn=0x00000000004127EC string=0x00000000004127F0 "5"
 *   insn=0x00000000004127F4 string=0x00000000004127F8 ""
 *   insn=0x0000000000412804 string=0x0000000000412808 "\t@"
 *   insn=0x0000000000412814 string=0x0000000000412818 ""
 *   insn=0x0000000000412824 string=0x0000000000412828 "@"
 *   insn=0x0000000000412850 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000412878 string=0x000000000041287C "6"
 *   insn=0x0000000000412880 string=0x0000000000412884 ""
 *   insn=0x0000000000412890 string=0x0000000000412894 "\t@"
 *   insn=0x00000000004128A0 string=0x00000000004128A4 ""
 *   insn=0x00000000004128B0 string=0x00000000004128B4 "@"
 *   insn=0x00000000004128C4 string=0x00000000004128C8 "a"
 *   insn=0x00000000004128FC string=0x0000000000412900 "h"
 *   insn=0x0000000000412910 string=0x0000000000412914 "5"
 *   insn=0x0000000000412918 string=0x000000000041291C ""
 *   insn=0x0000000000412928 string=0x000000000041292C "\t@"
 *   insn=0x0000000000412938 string=0x000000000041293C ""
 *   insn=0x0000000000412948 string=0x000000000041294C "@"
 *   insn=0x0000000000412970 string=0x0000000000412974 "{"
 *   insn=0x000000000041299C string=0x00000000004129A0 "6"
 *   insn=0x00000000004129A4 string=0x00000000004129A8 ""
 *   insn=0x00000000004129B4 string=0x00000000004129B8 "\t@"
 *   insn=0x00000000004129C4 string=0x00000000004129C8 ""
 *   insn=0x00000000004129D4 string=0x00000000004129D8 "@"
 *   insn=0x00000000004129E8 string=0x00000000004129EC "a"
 *   insn=0x00000000004129F0 string=0x00000000004129F4 "["
 *   insn=0x00000000004129FC string=0x0000000000412A00 "S"
 *   insn=0x0000000000412A20 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000412A24 string=0x0000000000412A28 ")"
 *   insn=0x0000000000412A34 string=0x0000000000412A38 "(A"
 *   insn=0x0000000000412A3C string=0x0000000000412A40 ""
 *   insn=0x0000000000412A48 string=0x0000000000412A4C "`""
 *   insn=0x0000000000412A54 string=0x0000000000412A58 "B"
 *   insn=0x0000000000412A58 string=0x00000000001F8B60 "0'"
 *   insn=0x0000000000412A6C string=0x0000000000412A70 "4"
 *   insn=0x0000000000412A74 string=0x0000000000412A78 ""
 *   insn=0x0000000000412A84 string=0x0000000000412A88 "\t@"
 *   insn=0x0000000000412A94 string=0x0000000000412A98 ""
 *   insn=0x0000000000412AA4 string=0x0000000000412AA8 "@"
 *   insn=0x0000000000412AB8 string=0x0000000000412ABC "$"
 *   insn=0x0000000000412AC0 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000412AC4 string=0x0000000000412AC8 "h"
 *   insn=0x0000000000412AC4 string=0x0000000000412AD8 "&"
 *   insn=0x0000000000412AC8 string=0x0000000000412ACC "!@"
 *   insn=0x0000000000412AE0 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000412AEC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::checked_array_delete<boost::shared_ptr<Caver::InventoryItemPanel>>(_QWORD *a1)
{
  __int64 v2; // x8
  __int64 v3; // x23
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x8

  if ( a1 )
  {
    v2 = *(a1 - 1);
    if ( v2 )
    {
      v3 = 2 * v2;
      do
      {
        v4 = (_QWORD *)a1[v3 - 1];
        if ( v4 )
        {
          v5 = v4[1] - 1LL;
          v4[1] = v5;
          if ( !v5 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
            v6 = v4[2] - 1LL;
            v4[2] = v6;
            if ( !v6 )
              (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
          }
        }
        v3 -= 2;
      }
      while ( v3 * 8 );
    }
    operator delete[](a1 - 1);
  }
}

