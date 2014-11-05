/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
 *
 * Copyright (C) 2011 Perberos <perberos@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#ifndef __MATE_ABOUT_H__
#define __MATE_ABOUT_H__

#include <gtk/gtk.h>
#include <libintl.h> // for gettext
#include <glib/gi18n.h>
#include <config.h> // autogenerated by ./configure

#include <libmate-desktop/mate-aboutdialog.h>

const char* program_name = "MATE Desktop Environment";
const char* version = PACKAGE_VERSION;
const char* icon = "mate";
const char* desktop_icon = "desktop";
const char* website = "http://www.mate-desktop.org/";

const char* copyright =  ""
    "Copyright © 1997-2011 GNOME developers\n"
    "Copyright © 2011 Perberos\n"
    "Copyright © 2012-2014 MATE developers";

/* Increment comments_count if you add other comments. This will be
 * used to choose a random comment. */
const int comments_count = 6;
const char* comments_array[] = {
    N_("MATE provides an intuitive and attractive desktop to Linux users "
    "using traditional metaphors."),

    N_("MATE includes most of what you see on your computer, including the file "
    "manager, document viewer, image viewer, menus, and many applications."),

    N_("MATE is a Free, usable, stable, accessible desktop environment for the Unix-"
    "like family of operating systems."),

    N_("MATE is the continuation of GNOME 2. Hundreds of people have contributed code to "
    "GNOME since it was started in 1997; many more have contributed in other "
    "important ways, including translations, documentation, and quality assurance."),

    N_("GNOME 2 was the most popular Linux desktop but it’s no longer available... "
    "MATE is here to provide that same desktop to you!"),

    N_("The name “MATE” comes from yerba maté, a species of holly native "
    "to subtropical South America. Its leaves contain caffeine and are "
    "used to make infusions and a beverage called mate.")
};

const char* authors[] = {
    "MATE:",
    /* MATE founders */
    "Perberos <perberos@gmail.com>",
    "Stefano Karapetsas <stefano@karapetsas.com>",
    "Steve Zesch <stevezesch2@gmail.com>",
    "Clement Lefebvre <root@linuxmint.com>",
    /* MATE developers and contributors */
    "Scott Balneaves <sbalneav@alburg.net>",
    "Marcel Dijkstra <marcel.dykstra@gmail.com>",
    "Jasmine Hassan <jasmine.aura@gmail.com>",
    "Brent Hull <bhull2010@live.com>",
    "Steev Klimaszewski <steev@gentoo.org>",
    "Joseph Krieger <rowen.stipe@gmail.com>",
    "Nelson Marques <nmo.marques@gmail.com>",
    "Dan Mashal <dan.mashal@fedoraproject.org>",
    "Elan Ruusamäe <glen@delfi.ee>",
    "Yaakov Selkowitz <yselkowitz@users.sourceforge.net>",
    "Sam Tygier <samtygier@yahoo.co.uk>",
    "Wolfgang Ulbrich <chat-to-me@raveit.de>",
    "Sander Sweers <infirit@gmail.com>",
    "Benjamin Denisart <p.drouand@gmail.com>",
    "Efstathios Iosifidis <iefstathios@gmail.com>",
    "Martin Wimpress <code@flexion.org>",
    "John Paul Adrian Glaubitz <glaubitz@physik.fu-berlin.de>",
    "Mike Gabriel <sunweaver@debian.org>",
    /* MATE Google Summer of Code students */
    "Alexander van der Meij <alexandervdm@gliese.me>",
    "Avishkar Gupta <avishkar_gupta@outlook.com>",
    "Laszlo Boros <iamsemmu@gmail.com>",
    "Michal Ratajsky <michal.ratajsky@gmail.com>",
    /* GNOME developers */
    "GNOME:",
    "Jérôme Abela",
    "Rob Adams",
    "Djihed Afifi",
    "Sarfraaz Ahmed",
    "Christopher Aillon",
    "Lauri Alanko",
    "Борислав Александров (Borislav Aleksandrov)",
    "Seth Alves",
    "Shawn T. Amundson",
    "Robert Ancell",
    "Erik Andersen",
    "Филип Андонов (Filip Andonov)",
    "Marius Andreiana",
    "Jon Anhold",
    "Арангел Ангов (Arangel Angov)",
    "Никола Антонов (Nikola Antonov)",
    "Sandy Armstrong",
    "Frank Arnold",
    "Arunprakash",
    "Paolo Bacchilega",
    "Peter Bach",
    "Timur I. Bakeyev",
    "Sébastien Bacher",
    "Chris Ball",
    "Szabolcs 'Shooby' Bán",
    "Lasse Bang Mikkelsen",
    "Matthew Barnes",
    "Seba Barto",
    "Emmanuele Bassi",
    "Martin Baulig",
    "Tom Bech",
    "Andreas Beck",
    "Carlos Amador Bedolla",
    "Martijn van Beers",
    "Frank Belew",
    "Calum Benson",
    "Jacob Berkman",
    "Eckehard Berns",
    "Žygimantas Beručka",
    "Runa Bhattacharjee",
    "Robert Bihlmeyer",
    "Jonathan Blandford <jrb@redhat.com>",
    "Christopher Blizzard",
    "Bruno Boaventura",
    "Евгени Боевски (Evgeni Boevski)",
    "Jérôme Bolliet",
    "Andreas Bolsch",
    "Wouter Bolsterlee",
    "David Bolter",
    "Dave Bordoley",
    "Paolo Borelli",
    "James Bowes",
    "Karsten Bräckelmann",
    "Hendrik Brandt",
    "Dario Bressanini",
    "Emmanuel Briot",
    "Stephen Browne",
    "Marcus Brubaker",
    "Christian Bucher",
    "Ronald S. Bultje",
    "Rich Burridge",
    "Ross Burton",
    "Jeff Cai",
    "Brian Cameron",
    "Dave Camp",
    "Didier Carlier",
    "Anders Carlsson",
    "Luca Cavalli",
    "Chema Celorio",
    "Youssef Chahibi",
    "Gaël Chamoulaud",
    "Сава Чанков (Sava Chankov)",
    "Damon Chaplin",
    "Kevin Charter",
    "Erwann Chénedé",
    "張 國 冠",
    "Павел Чолаков (Pavel Cholakov)",
    "Kenneth Rohde Christiansen",
    "Bryan Clark",
    "Chad Clark",
    "Matthias Clasen",
    "Andrew Clausen",
    "Jason Clinton",
    "Jules Colding",
    "Jeremy Collins",
    "Rusty Conover",
    "Pat Costello",
    "Phil Cowans",
    "Alan Cox",
    "Dennis Cranston",
    "Mark Crichton",
    "Frédéric Crozat",
    "Andreas Czechanowski",
    "Виктор Дачев (Victor Dachev)",
    "Johan Dahlin",
    "Nalin Dahyabhai",
    "Dan Damian",
    "Sayamindu Dasgupta",
    "Phil Dawes",
    "Fatih Demir",
    "Guillaume Desmottes",
    "Frédéric Devernay",
    "Joanmarie Diggs",
    "Feico W. Dillema",
    "Филип Димитров (Philip Dimitrov)",
    "Carlos Eduardo Rodrigues Diógenes",
    "Станимир Джевелеков (Stanimir Djevelekov)",
    "Петър Добрев (Peter Dobrev)",
    "Явор Доганов (Yavor Doganov)",
    "Radek Doulik",
    "Sebastian Dröge",
    "Máirín Duffy",
    "Alex Duggan",
    "László Dvornik",
    "Tom Dyas",
    "Karl Eichwalder",
    "John Ellis",
    "Diego Escalante Urrelo",
    "Behdad Esfahbod",
    "Arturo Espinosa",
    "Gus Estrella",
    "David Etherton",
    "Larry Ewing",
    "Marc Ewing",
    "Gergő Érdi",
    "Peter Fales",
    "Ahmad Farghal",
    "Joaquim Fellmann",
    "Christophe Fergeau",
    "Jens Finke",
    "Mark Finlay",
    "Dave Finton",
    "Milon Firikis",
    "John Fleck",
    "Raúl Perusquia Flores",
    "Crispin Flowerday",
    "Lawrence Foard",
    "Leonardo Fontenelle",
    "Glynn Foster",
    "Ben FrantzDale",
    "Jeff Freedman",
    "David Abilleira Freijeiro",
    "Nat Friedman",
    "Jochen Friedrich",
    "Adam Fritzler",
    "Michael Fulbright",
    "Christopher R. Gabriel",
    "Mark Galassi",
    "Tony Gale",
    "Carlos García Campos",
    "Matthew Garrett",
    "Carlos Garnacho Parro",
    "Jeff Garzik",
    "Vincent Geddes",
    "Владимир Герджиков (Vladimir Gerdjikov)",
    "Tim Gerla",
    "Björn Giesler",
    "Quim Gil",
    "Evandro Fernandes Giovanini",
    "Владимира Гиргинова (Vladimira Girginova)",
    "Dave Glowacki",
    "Scott Goehring",
    "Jody Goldberg",
    "Randy Gordon",
    "Ted Gould",
    "Jens Granseuer",
    "Kenny Graunke",
    "Alex Graveley",
    "Jamin Philip Gray",
    "Dov Grobgeld",
    "Bertrand Guiheneuf",
    "Alan Aspuru Guzik",
    "Telsa Gwynne",
    "Fredrik Hallenberg",
    "Mikael Hallendal",
    "Lars Hamann",
    "Bill Haneman",
    "Michael Hanni",
    "Raja R Harinath",
    "Heath Harrelson",
    "Peter Harvey",
    "Mathias Hasselmann",
    "Peter Hawkins",
    "Chris Heath",
    "Scott Heavner",
    "Sebastian Heinlein",
    "Jon K Hellan",
    "James Henstridge <james@daa.com.au>",
    "Fernando Herrera",
    "Richard Hestilow",
    "Raphael Higino",
    "Thomas Hinkle",
    "Iain Holmes",
    "Adam Hooper",
    "Alan Horkan",
    "Khaled Hosny",
    "Ihar Hrachyshka",
    "Николай Христов (Nikolay Hristov)",
    "Irene Huang",
    "Richard Hughes",
    "David Huggins-Daines",
    "Richard Hult",
    "Andreas Hyden",
    "Miguel de Icaza <miguel@ximian.com>",
    "Hiroyuki Ikezoe",
    "Khandakar Mujahidul Islam",
    "Johnny Jacob",
    "Mayank Jain",
    "Vivek Jain",
    "Tim Janik",
    "Stefan Jeske",
    "王 剑",
    "Amed Ç. Jiyan",
    "Michael K. Johnson",
    "Keld Jørn Simonsen",
    "Andy Kahn",
    "Mikkel Kamstrup Erlandsen",
    "Sami Kananoja",
    "Янко Канети (Yanko Kaneti)",
    "Ивелина Кърчева (Ivelina Karcheva)",
    "Theppitak Karoonboonyanan",
    "Matt Keenan",
    "Gábor Kelemen",
    "Michael Kellen",
    "Christian Kellner",
    "Stephen Kiernan",
    "Spencer Kimball",
    "Christian Kintner",
    "Christian Kirbach",
    "Peter Kirchgessner",
    "Alexander Kirillov",
    "Димитър Киров (Dimitar Kirov)",
    "Andre Klapper",
    "Helmut Köberle",
    "Alfredo Kojima",
    "Атанас Кошаров (Atanas Kosharov)",
    "Martin Kretzschmar",
    "Harish Krishnaswamy",
    "Andrew Kuchling",
    "Tomas Kuliavas",
    "Stephan Kulow",
    "Kaushal Kumar",
    "Nirmal Kumar",
    "Praveen Kumar",
    "Martynas Kunigelis",
    "Tuomas Kuosmanen",
    "Olof Kylander",
    "Mathieu Lacage",
    "Francis J. Lacoste",
    "Chris Lahey",
    "Dom Lachowicz",
    "Scott Laird",
    "Birger Langkjer",
    "Ask Hjorth Larsen",
    "Alexander Larsson",
    "Guillaume Laurent",
    "Ole Laursen",
    "Michael Lausch",
    "Will LaShell",
    "Jens Lautenbacher",
    "Evan Lawrence",
    "Garrett LeSage",
    "Jason Leach",
    "George Lebl",
    "Gregory Leblanc",
    "Elliot Lee <sopwith@redhat.com>",
    "Marc Lehmann",
    "Noah Levitt",
    "Raph Levien",
    "廖 昭 雄",
    "Tor Lillqvist",
    "Matt Loper",
    "Nick Lopez",
    "Xan Lopez",
    "Elixan Loran",
    "Ryan Lortie",
    "Harry Lu",
    "Dirk Lutjens",
    "Josh MacDonald",
    "Og Maciel",
    "David MacKay",
    "Davyd Madeley",
    "Mohamed Magdy",
    "Paolo Maggi",
    "Sam Magnuson",
    "Ian Main",
    "David Malcolm",
    "Jordi Mallach",
    "Mandrake",
    "Daniel Manrique",
    "Kjartan Maraas",
    "Matthew Marjanovic",
    "Heath Martin",
    "Oliver Maruhn",
    "Fabio Marzocca",
    "Dave Mason",
    "James Mastros",
    "Peter Mattis",
    "Gordon Matzigkeit",
    "Dietmar Maurer <dietmar@ximian.com>",
    "Justin Maurer",
    "Shaun McCance",
    "William Jon McCann",
    "Callum McKenzie",
    "Gregory McLean",
    "Mark McLoughlin",
    "Michael Meeks",
    "Federico Mena-Quintero",
    "Christophe Merlet",
    "Christian Meyer",
    "Tim Miao",
    "Gintautas Miliauskas",
    "Cesar Miquel",
    "Julian Missig",
    "Eric B. Mitchell",
    "Jaka Mocnik",
    "Paolo Molaro",
    "Lynn Monsanto",
    "David Mosberger",
    "Rodrigo Moya <rodrigo@ximian.com>",
    "Dan Mueth",
    "Thomas Muldowney",
    "Alexandre Muñiz",
    "Tim-Philipp Müller",
    "Sivaiah Nallagatla",
    "남 성 현",
    "Deepa Natarajan",
    "Ales Navicki",
    "Јован Наумовски (Jovan Naumovski)",
    "Dave Neary",
    "Karl Nelson",
    "Elijah Newren",
    "Christian Neumair",
    "Mike Newman",
    "Seth Nickell",
    "Asger Alstrup Nielsen",
    "Kenneth Nielsen",
    "Nate Nielsen",
    "Eric Nielson",
    "Bastien Nocera",
    "Martin Norbäck",
    "Joachim Noreiko",
    "Alexander Nyakhaychyk",
    "Daniel Nylander",
    "Padraig O'Briain",
    "Eskil Olsen",
    "Jimmy Olsen",
    "David Orme",
    "Karl Anders Oygard",
    "Tomas Ögren",
    "Keith Packard",
    "Jay Painter",
    "Chenthill Palanisamy",
    "John Palmieri",
    "Cameron Parish",
    "Conrad Parker",
    "Stuart Parmenter",
    "Guilherme de S. Pastore",
    "Sankarasivasubramaniam Pasupathilingam",
    "Данило Шеган",
    "Mike Pedersen",
    "Nils Pedersen",
    "Илия Пенев (Ilia Penev)",
    "Havoc Pennington",
    "Ettore Perazzoli",
    "Carlos Perelló Marín",
    "Christian Persch",
    "Marco Pesenti Gritti",
    "Ian Peters",
    "Martin Kasper Petersen",
    "Christof Petig",
    "Владимир Петков (Vladimir \"Kaladan\" Petkov)",
    "Joe Pfeiffer",
    "Ben Pierce",
    "Chris Pinkham",
    "Hasbullah Bin Pit",
    "Sebastian Pölsterl",
    "Germán Poo-Caamaño",
    "Пейо Попов (Peio Popov)",
    "Dick Porter",
    "Ясен Праматаров (Yasen Pramatarov)",
    "Tero Pulkkinen",
    "Атанас Пюскюлев (Atanas Pyuskyulev)",
    "Sushma Rai",
    "Ростислав Райков (Rostislav \"zbrox\" Raikov)",
    "Madhan Raj M.",
    "Srinivasa Ragavan",
    "Rajeev Ramanathan",
    "Jean-François Rameau",
    "Sriram Ramkrishna",
    "The Rasterman",
    "Oliver Rauch",
    "Lucas Rocha",
    "Erdal Ronahi",
    "Andreas Røsdal",
    "Christian Rose",
    "Cody Russell",
    "Reklaw",
    "Jens Christian Restemeier",
    "Patrick Reynolds",
    "Robert Richardson",
    "Hendrik Richter",
    "Kristian Rietveld",
    "Sebastian Rittau",
    "Alex Roberts",
    "Michel Roelofs",
    "Ueli Rutishauser",
    "Lars Rydlinge",
    "Peter Ryland",
    "Claudio Saavedra",
    "Joseph Sacco",
    "Bibek Sahu",
    "Arvind Samptur",
    "Søren Sandmann",
    "Damien Sandras",
    "Pablo Saratxaga",
    "笹 山 和 宏",
    "Carsten Schaar",
    "Christian Schaller",
    "Wayne Schuller",
    "Franck Schneider",
    "Ingo Schneider",
    "Bernd Schroeder",
    "John Schulien",
    "Chris Scobell",
    "Don Scorgie",
    "Jens Seidel",
    "Dodji Seketeli",
    "Shakti Sen",
    "Iñigo Serna",
    "Shaleh",
    "Devashish Sharma",
    "Joe Shaw",
    "Александър Шопов (Alexander Shopov)",
    "Clytie Siddall",
    "Alejandro Aguilar Sierra",
    "Miroslav Silovic",
    "Manish Singh",
    "Timo Sirainen",
    "David F. Skoll",
    "Jochen Skulj",
    "Nuke Skyjumper",
    "Петър Славов (Peter \"Peshka\" Slavov)",
    "Josh Sled",
    "John Slee",
    "Raphaël Slinckx",
    "Brent Smith",
    "Garrett Smith",
    "Suzanna Smith",
    "Andrew Sobala",
    "Shreyas Srinivasan",
    "Maciej Stachowiak",
    "Stalyn",
    "Jeffrey Stedfast",
    "Jakub Steiner",
    "Ben Stern",
    "Micah Stetson",
    "Ray Strode",
    "Luke Stroven",
    "Mariano Suárez-Alvarez",
    "Parthasarathi Susarla",
    "Nathan Carl Summers",
    "Istvan Szekeres",
    "Петър Тахчиев (Peter Tahchiev)",
    "HideToshi Tajima",
    "Nigel Tao",
    "Tristan Tarrant",
    "Anthony Taylor",
    "Owen Taylor",
    "Peter Teichman",
    "Arturo Tena",
    "Thomas Thurman",
    "Kimball Thurston",
    "András Tímár",
    "Boyd Timothy",
    "Rêzan Tovjîn",
    "Alp Toker",
    "Chris Toshok",
    "Christoph Toshok",
    "Malcolm Tredinnick",
    "Tom Tromey <tromey@redhat.com>",
    "David Trowbridge",
    "Jon Trowbridge",
    "段 活 文",
    "Сергей В. Удальцов",
    "Juan Pablo Ugarte",
    "Vincent Untz",
    "Manish Vachharajani",
    "Neil Vachharajani",
    "Tristan Van Berkom",
    "Philip Van Hoof",
    "Thomas Vander Stichele",
    "Veerapuram Varadhan",
    "Васил Василев (Vasil Vasilev)",
    "Daniel Veillard",
    "Vendu",
    "Andrew Veliath",
    "Юлия Велкова (Julia Velkova)",
    "Luis Villa",
    "Olav Vitters",
    "Marius Vollmer",
    "Patrick Wade",
    "Shawn Wagner",
    "Will Walker",
    "Hanna Wallach",
    "Colin Walters",
    "Matthias Warkus",
    "Jeff Waugh",
    "Morten Welinder",
    "Jonh Wendell",
    "Bruno Widmann",
    "Robert Wilhelm",
    "Sebastian Wilhelmi",
    "Dan Williams",
    "James Willcox",
    "David Winkler",
    "Dan Winship",
    "Jeremy Wise",
    "Roger Wolff",
    "Ivan Wong",
    "Frank Worsley",
    "Rizoyê Xerzî",
    "Wang Xin",
    "James Youngman",
    "Mengjie Yu",
    "Li Yuan",
    "Orest Zborowski",
    "Simon Zheng",
    "Sascha Ziemann",
    "Michael Zucchi",
    "Jason van Zyl",
    NULL
};

// documentation
const char* documenters[] = {
    "...", // TODO: fillme
    NULL
};
// artists
const char* artists[] = {
    "Marcel Dijkstra <marcel.dykstra@gmail.com>",
    "Rowen Stipe <rowen.stipe@gmail.com>",
    "Wolfgang Ulbrich <chat-to-me@raveit.de>",
    NULL
};

// widget for mate-about window
MateAboutDialog* mate_about_dialog = FALSE;

#if GTK_CHECK_VERSION(3, 0, 0)
    GtkApplication* mate_about_application;
#else
    GApplication* mate_about_application;
#endif

/**
 * If this value is set to TRUE, then mate_about_dialog will not be called
 * on the main function.
 */
gboolean mate_about_nogui = FALSE;
// functions
void mate_about_run(void);
void mate_about_release_version(void);

#if GTK_CHECK_VERSION(3, 0, 0)
    static void mate_about_on_activate(GtkApplication* app);
#else
    static void mate_about_on_activate(GApplication* app);
#endif

// arguments definitions
static GOptionEntry command_entries[] = {
    {"version", 'v', 0, G_OPTION_ARG_NONE, &mate_about_nogui, "Show MATE version", NULL},
    {NULL}
};

#endif /* __MATE_ABOUT_H__ */
