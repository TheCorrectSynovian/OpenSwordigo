/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF810
 * Mangled: ._ZNSt3mapISsmSt4lessISsESaISt4pairIKSsmEEEixERS3_
 * Demangled: std::map<std::string,ulong,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000003DD8AC  Caver::ItemOverlay::UpdateItemCount(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000003DD8AC  Caver::ItemOverlay::UpdateItemCount(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF818 string=0x00000000001FF81C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::map<std::string,unsigned long>::operator[]()
{
  JUMPOUT(0x3DE144);
}

