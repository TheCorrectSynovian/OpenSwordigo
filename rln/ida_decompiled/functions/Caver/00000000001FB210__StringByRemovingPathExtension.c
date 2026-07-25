/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB210
 * Mangled: ._ZN5Caver29StringByRemovingPathExtensionERKSs
 * Demangled: Caver::StringByRemovingPathExtension(std::string const&)
 *
 * Callers: 5
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x00000000003A5F0C  Caver::ProfileManager::~ProfileManager()
 *   0x000000000044EEB8  Caver::PODLoader::CreateMesh(int)
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *   0x00000000004D173C  Caver::AudioPlayerImpl::InitWithFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000004B4DD4  boost::gregorian::date::date(boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB218 string=0x00000000001FB21C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::StringByRemovingPathExtension()
{
  JUMPOUT(0x4B4FEC);
}

