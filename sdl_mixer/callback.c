#include "SDL.h"
#include "SDL_mixer.h"

void HookMusicFinished(void* pfoo) {
	Mix_HookMusicFinished(pfoo);
}
