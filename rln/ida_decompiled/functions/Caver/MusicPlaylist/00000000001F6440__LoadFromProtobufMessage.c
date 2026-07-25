/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6440
 * Mangled: ._ZN5Caver13MusicPlaylist23LoadFromProtobufMessageERKNS_5Proto13MusicPlaylistE
 * Demangled: Caver::MusicPlaylist::LoadFromProtobufMessage(Caver::Proto::MusicPlaylist const&)
 *
 * Callers: 1
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x000000000048331C  Caver::MusicPlaylist::LoadFromProtobufMessage(Caver::Proto::MusicPlaylist const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6448 string=0x00000000001F644C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MusicPlaylist::LoadFromProtobufMessage(
        Caver::MusicPlaylist *this,
        const Caver::Proto::MusicPlaylist *a2)
{
  return _ZN5Caver13MusicPlaylist23LoadFromProtobufMessageERKNS_5Proto13MusicPlaylistE(this, a2);
}

