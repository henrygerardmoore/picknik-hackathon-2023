; PDDL PLANNING DOMAIN (PICKNIK HACKATHON)

(define (domain domain_simple)
  (:requirements :strips :equality)
  (:predicates  ; Static predicates
                (Robot ?r)          ; Represents the robot
                (Obj ?o)            ; Object representation
                (Location ?l)       ; Location representation

                ; Fluent predicates
                (IsFree ?l)         ; Whether a location is free
                (At ?o ?l)          ; Robot/Object's location, or location's Room
  )

  ; ACTIONS
  ; PICK_AND_PLACE
  (:action pick_and_place
    :parameters (?r ?o ?l1 ?l2)
    :precondition (and (Robot ?r)
                       (Location ?l1)
                       (Location ?l2)
                       (Obj ?o)
                       (At ?o ?l1)
                       (IsFree ?l2)
                  )
    :effect (and (IsFree ?l1)
                 (not (IsFree ?l2))
                 (not (At ?o ?l1))
                 (At ?o ?l2)
            )
  )

)
