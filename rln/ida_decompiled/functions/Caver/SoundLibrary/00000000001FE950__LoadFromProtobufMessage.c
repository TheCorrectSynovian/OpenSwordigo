/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE950
 * Mangled: ._ZN5Caver12SoundLibrary23LoadFromProtobufMessageERKNS_5Proto12SoundLibraryE
 * Demangled: Caver::SoundLibrary::LoadFromProtobufMessage(Caver::Proto::SoundLibrary const&)
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x0000000000485478  Caver::SoundLibrary::LoadFromProtobufMessage(Caver::Proto::SoundLibrary const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE958 string=0x00000000001FE95C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SoundLibrary::LoadFromProtobufMessage(
        Caver::SoundLibrary *this,
        const Caver::Proto::SoundLibrary *a2)
{
  return _ZN5Caver12SoundLibrary23LoadFromProtobufMessageERKNS_5Proto12SoundLibraryE(this, a2);
}

