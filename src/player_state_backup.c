// #include "global.h"
// #include "field_player_avatar.h"

// /* --------------------------------------------------------------------- */
// /*  PLAYER‑STATE BACKUP MODULE                                           */
// /* --------------------------------------------------------------------- */
// /*  Keeps the bike / surf / on‑foot flag across a battle.                */
// /* --------------------------------------------------------------------- */

// struct PlayerStateBackup
// {
//     u8    avatarFlags;   // 0x02 Mach, 0x04 Acro, 0x08 Surf
//     bool8 valid;
// };

// EWRAM_DATA static struct PlayerStateBackup sPlayerState = {0};

// void BackupPlayerStateBeforeBattle(void)
// {
//     sPlayerState.avatarFlags =
//         gPlayerAvatar.flags &
//         (PLAYER_AVATAR_FLAG_MACH_BIKE |
//          PLAYER_AVATAR_FLAG_ACRO_BIKE |
//          PLAYER_AVATAR_FLAG_SURFING);

//     sPlayerState.valid = TRUE;
// }

// /*  Call on the first field frame AFTER the battle screen returns. */
// void RestorePlayerStateAfterBattle(void)
// {
//     if (!sPlayerState.valid)
//         return;

//     if ((gPlayerAvatar.flags &
//         (PLAYER_AVATAR_FLAG_MACH_BIKE |
//          PLAYER_AVATAR_FLAG_ACRO_BIKE |
//          PLAYER_AVATAR_FLAG_SURFING))
//         != sPlayerState.avatarFlags)
//     {
//         if (sPlayerState.avatarFlags & PLAYER_AVATAR_FLAG_MACH_BIKE)
//             SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_MACH_BIKE);
//         else if (sPlayerState.avatarFlags & PLAYER_AVATAR_FLAG_ACRO_BIKE)
//             SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ACRO_BIKE);
//         else if (sPlayerState.avatarFlags & PLAYER_AVATAR_FLAG_SURFING)
//             SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_SURFING);
//         else
//             SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ON_FOOT);
//     }

//     sPlayerState.valid = FALSE;   // one‑shot restore
// }
