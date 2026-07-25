/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8720
 * Mangled: ._ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver13MusicPlaylistEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>*)
 *
 * Callers: 1
 *   0x0000000000480200  Caver::MusicPlayer::~MusicPlayer()
 *
 * Callees: 1
 *   0x000000000048049C  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8728 string=0x00000000001F872C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>::destroy()
{
  return _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver13MusicPlaylistEEEEE7destroyEPS8_();
}

