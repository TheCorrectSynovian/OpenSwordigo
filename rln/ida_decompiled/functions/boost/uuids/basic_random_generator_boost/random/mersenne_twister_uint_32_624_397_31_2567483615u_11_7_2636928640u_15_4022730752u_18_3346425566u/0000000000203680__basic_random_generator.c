/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203680
 * Mangled: ._ZN5boost5uuids22basic_random_generatorINS_6random16mersenne_twisterIjLi32ELi624ELi397ELi31ELj2567483615ELi11ELi7ELj2636928640ELi15ELj4022730752ELi18ELj3346425566EEEEC2Ev
 * Demangled: boost::uuids::basic_random_generator<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>::basic_random_generator(void)
 *
 * Callers: 1
 *   0x00000000004B2D7C  Caver::UniqueIdentifier(void)
 *
 * Callees: 1
 *   0x00000000004B2D7C  Caver::UniqueIdentifier(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203688 string=0x000000000020368C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::uuids::basic_random_generator<boost::random::mersenne_twister<unsigned int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>::basic_random_generator()
{
  JUMPOUT(0x4B2F0C);
}

