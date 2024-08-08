По просьбе ДОРОГОГО БРАТА была воскрешена эта версия мода. От оригинальной версии отличий немного:
1) Файлы game.def и cgame.def были скопированы в соответсвующих папках и дубляжи переименованы с добавлением JK2_, так как без них не происходит сборка Release и Final сборок. В первом варианте они нужны для сборки дебаг версий и по хорошему надо избавиться от дубляжа, который сделал автор из-за своих переименовываний, но мне лень это исправлять.
2) Закомментирован вызов предупреждения о неправильной версии OpenRP по эстетическим причинам и практическим причинам, так как из-за неё приходится перезаходить при первом запуске и возможно крашит?
3) Закомментирован патч хука HOOK_Q3INFOBOOM от автора, так как он вызывал Access violation (0xc0000005) Address: 0x00418b2a. Исправить хук я не могу в силу незнания движка, не затратив кучу времени и отсутствия причины вообще его фиксить.
4) Нагло украдена из другого мода и вставлена команда /roll.

Известные баги:
1) Ракетница. Она не стреляет вообще. Я точно знаю, что автор менял значения( урон, скорость и тд) у ракет и, кажется, я видел где-то модификацию ракет в плане движка.
2) Анимация. Багается или из-за быстрого переключения оружия или от прыжков и стрельбы или ещё от чего.
3) Нет урона с рукопашного боя.
4) Ну и то что пишется в консоли.

Сборка:
1) Проект собирается VS2012 версией v110 купить можно тут https://rutracker.net/forum/viewtopic.php?t=6307020
2) После сборки Release м Final версий проекта появится 3 dll файла в папке jke
3) Оттуда ручками скопировать их в папку OpenRP
4) Запустить MakePK3.bat
5) При повторной сборке папку OpenRP лучше всего удалить и поставить новую, так как MakePK3.bat кривой и её раздувает

Примечание:
Я не имею представления как настроить дебагер VS для этого мода, может из-за кривых рук, но то что написано автором в ридми просто запускает ванильную игру. Очень нужно разобраться как его запустить и добавить сюда, иначе можно модифицировать только по мелочи.


OpenRP
======

What is OpenRP?
---------------
OpenRP is an RP mod that is being designed for JKA.

As the name states, it shall be used for roleplaying, but in addition to this, we intend for the mod to be relatively easy to use, all the while incorporating many features of other mods, in addition to many of our own features.

To incorporate features from other mods, we will use code from open source mods (if the author states it is allowed or gives us permission) or we will replicate features from other mods using our own code.

This will make for the best roleplaying experience, all the while not having a clunky or difficult to use interface.

OpenRP's goals
--------------
 * We intend to have menus that perform the commands for you instead of always having to type it out. However, should you want to continue using the console, you are completely free to do so!
 * We further wish for the mod to have useful features, all the while incorporating feedback from its own user-base, to make this modification for JKA roleplay the very best it can be!

What features does it have?
---------------------------
 * We are using an account and character creation system (courtesy of Legacy OJP, our code base), in addition to an administrative system.

 * Our admin system has all the basic commands of kick, ban, silence, and so on, but also has commands to enhance the roleplaying experience, such as the ability to change a map's music, play sounds, place effects(courtesy of ClanMod), place entities(courtesy of JA Coders) and so on.

 * We are also constantly working on and adding security fixes, bug fixes, and limit increases for both base JKA and OpenRP. 
	* Security and bug fixes are self-explanatory, but what limits mean is that we wish to increase the maximum vehicles allowed(done thanks to OJP), in addition to the maximum characters in your name(done thanks to JA Coders). 

 * We have added a credits system, which will allow you to buy weapons, items, and misc items such as food or drinks that increase your health by a small amount.
 
 * Distance based chat - This means that you aren't able to hear those a certain distance away from you. This improves role playing as chat isn't being added to by others' RPs and helps to prevent metagaming.
 
 * Faction system - Create your own faction, add or withdraw from your faction's bank if you're the leader of the faction, and see a roster of all faction members along with their ranks that you set.

What is planned for OpenRP in the future?
-----------------------------------------
 * We wish to design the menus to look and interact better with the user.

 * We also wish to expand the maximum Force power level to level 5 or higher as opposed to base JKA's level 3.

What operating systems will OpenRP be available on?
---------------------------------------------------
OpenRP will be available on Windows on the day of release.
	Please note that as of the time of writing, we only intend to support Windows XP or higher. The mod may (and likely will) work on previous versions of Windows, but there are no guarantees.

Linux may be supported (serverside only, we don't have plans at the moment for clientside Linux support) after some issues with Linux compatibility are worked out.

No Mac support is planned as of the time of writing as no developers have access to a Mac or have knowledge on developing for Macs.

Can I download a .zip (or similar archive) of OpenRP now to test it?
------------------------------------
Sorry, but currently a .zip of the mod cannot be currently downloaded.

We have decided not to release any testing versions until it is very close to the release date and only to trusted testers until it is closer to the release date.

You can however, compile the source code if you want to and use that, but a .zip version will not be released until it is closer to the release date.

Can I develop or help with OpenRP?
----------------------------------
Of course! We always enjoy the prospect of having more volunteers to aid us in the building of this mod.

At this time, we require:
 * Several coders to aid us.
 * One who is experienced with menu construction.

Thank you for reading this 'About' page. If you wish to make any suggestions, they can be made in the "Issues" tab near the top of this page, which may also be used to report bugs.
====================================================================================================================================================================================
