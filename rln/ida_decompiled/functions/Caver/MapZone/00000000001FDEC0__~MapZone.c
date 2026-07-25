/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDEC0
 * Mangled: ._ZN5Caver7MapZoneD2Ev
 * Demangled: Caver::MapZone::~MapZone()
 *
 * Callers: 2
 *   0x00000000003BD23C  std::vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MapNode>*,std::vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>>,boost::shared_ptr<Caver::MapNode> const&)
 *   0x00000000003BD6AC  boost::detail::sp_counted_impl_p<Caver::MapZone>::dispose(void)
 *
 * Callees: 1
 *   0x00000000003BD700  Caver::MapZone::~MapZone()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDEC8 string=0x00000000001FDECC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MapZone::~MapZone(Caver::MapZone *this)
{
  _ZN5Caver7MapZoneD2Ev(this);
}

