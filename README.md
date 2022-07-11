# bds-mod-saveallchunks
Mod for BDS to force it to save all chunks, useful for exporting vanilla maps for custom server use

## Background
If you've tried to import a freshly generated world from MCPE to a custom server in recent Minecraft versions, you probably noticed the end result doesn't look so great - usually being riddled with missing chunks and being basically unrecognizable unless built-up by players.

This is because Bedrock tries to be smart about what it saves - if a chunk wasn't modified by a player since being loaded, it won't save it, since it can just regenerate it when the game is next opened.

While this is cool for reducing the size of world saves, it's very inconvenient when you want to export the world to somewhere that doesn't support vanilla world generation, such as a custom server.

This mod makes disables this smart mechanism and forces the server to always save all chunks, regardless of whether they've been modified or not.
