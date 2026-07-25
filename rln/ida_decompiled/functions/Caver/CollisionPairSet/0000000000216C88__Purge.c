/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000216C88
 * Mangled: _ZN5Caver16CollisionPairSet5PurgeEv
 * Demangled: Caver::CollisionPairSet::Purge(void)
 *
 * Callers: 2
 *   0x0000000000200700  Caver::CollisionPairSet::Purge(void)
 *   0x0000000000215F14  std::__uninitialized_copy<false>::__uninit_copy<Caver::Binding *,Caver::Binding *>(Caver::Binding *,Caver::Binding *,Caver::Binding *)
 *
 * Callees: 2
 *   0x00000000001FD090  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<Caver::CollisionPair const,bool>>)
 *   0x000000000054C640  sub_54C640
 *
 * Referenced strings: 14
 *   insn=0x0000000000216C98 string=0x0000000000216C9C "t"
 *   insn=0x0000000000216C9C string=0x0000000000216CA0 "v""
 *   insn=0x0000000000216CA4 string=0x0000000000216CA8 " "
 *   insn=0x0000000000216CBC string=0x0000000000216CC0 "`"
 *   insn=0x0000000000216CCC string=0x0000000000216CD0 ""
 *   insn=0x0000000000216CD8 string=0x0000000000216CDC "H"
 *   insn=0x0000000000216CDC string=0x0000000000216CE0 "H"
 *   insn=0x0000000000216CE0 string=0x0000000000216CE4 ""
 *   insn=0x0000000000216CE8 string=0x0000000000216CEC "i@"
 *   insn=0x0000000000216CF8 string=0x0000000000216CFC ""
 *   insn=0x0000000000216CFC string=0x0000000000216D00 "i@"
 *   insn=0x0000000000216D08 string=0x0000000000216D0C "M"
 *   insn=0x0000000000216D1C string=0x00000000001FD090 "0'"
 *   insn=0x0000000000216D24 string=0x0000000000216D28 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollisionPairSet::Purge(__int64 this)
{
  __int64 v1; // x20
  __int64 v2; // x22
  __int64 v3; // x21
  _QWORD *v4; // x0

  v1 = *(_QWORD *)(this + 24);
  v2 = this + 8;
  if ( this + 8 != v1 )
  {
    v3 = *(_QWORD *)(this + 24);
    do
    {
      if ( *(_BYTE *)(v3 + 48) )
      {
        *(_BYTE *)(v3 + 48) = 0;
        this = sub_54C640(v1);
        v1 = this;
      }
      else
      {
        v4 = *(_QWORD **)(v3 + 32);
        if ( v4[5] )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v3 + 40) + 40LL) )
          {
            (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 208LL))(v4, 8);
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v3 + 40) + 208LL))(
              *(_QWORD *)(v3 + 40),
              8,
              *(_QWORD *)(v3 + 32));
          }
        }
        v1 = sub_54C640(v1);
        this = std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase_aux();
      }
      v3 = v1;
    }
    while ( v2 != v1 );
  }
  return this;
}

